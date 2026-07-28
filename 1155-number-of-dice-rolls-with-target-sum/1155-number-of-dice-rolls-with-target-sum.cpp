class Solution {
public:
long long mod=1e9+7;
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<long long>>dp(n+1,vector<long long>(target+1,0));
        //according to base case
        dp[0][0]=1;
        for(int i=1;i<=n;i++){//as we know that at idx=0 we know that value already so we dont need to calculate 
            for(int j=1;j<=target;j++){
                long long ans=0;
                for(int z=1;z<=k;z++){
                    if(j-z>=0){
                        ans=(ans+dp[i-1][j-z])%mod;
                    }
                }
                dp[i][j]=ans;
            }
            
        }
        return (int)dp[n][target];
    }
};