class Solution {
public:
    long long mod = 1e9 + 7;

    int numTilings(int n) {
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;
        vector<long long> dp(n + 1, 0);

        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            dp[i] = (2LL * dp[i - 1] + dp[i - 3]) % mod;
        }

        return dp[n];
    }
};