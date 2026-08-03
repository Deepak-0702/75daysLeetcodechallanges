class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));

        for(int idx=n-1;idx>=0;idx--){
            for(int j=idx-1;j>=-1;j--){
                int take=0;
                if(j==-1 || nums[idx]>nums[j]){
                    take=1+dp[idx+1][idx+1];
                }
                int nottake=dp[idx+1][j+1];

                dp[idx][j+1]=max(take,nottake);
            }
        }
        return dp[0][0];
    }
};