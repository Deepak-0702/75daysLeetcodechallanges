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

                dp0 = (dp0 + dp1) % MOD;
            }
            else {
                dp1 = (dp0 + dp1 + 1) % MOD;
            }
        }

        return (dp0 + dp1 + hasZero) % MOD;
    }
};