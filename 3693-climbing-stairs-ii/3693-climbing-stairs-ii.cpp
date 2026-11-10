class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,0);
        dp[n]=0;

        for(int i=n-1;i>=0;i--){
            dp[i]=INT_MAX;
            for(int j=i+1;j<=min(n,i+3);j++){
                int jumpcost=costs[j-1]+(j-i)*(j-i);
                dp[i]=min(dp[i],jumpcost+dp[j]);
            }
        }
        return dp[0];
    }
};