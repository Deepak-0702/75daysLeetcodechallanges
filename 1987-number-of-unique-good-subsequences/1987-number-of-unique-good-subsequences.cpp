class Solution {
public:
    int numberOfUniqueGoodSubsequences(string binary) {
        const long long MOD = 1e9 + 7;

        long long dp0 = 0;
        long long dp1 = 0;
        bool hasZero = false;

        for (char ch : binary) {

            if (ch == '0') {
                hasZero = true;

                // Existing 1-starting subsequences ke end
                // me 0 add kar sakte hain
                dp0 = (dp0 + dp1) % MOD;
            }
            else {
                // Existing dp0 + dp1 ke end me 1 add karo
                // + "1" khud
                dp1 = (dp0 + dp1 + 1) % MOD;
            }
        }

        return (dp0 + dp1 + hasZero) % MOD;
    }
};