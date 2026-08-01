class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        vector<int>dp(n+2,0);
        for(int i=n-1;i>=0;i--){
            int rob=nums[i]+dp[i+2];
            int skip=dp[i+1];

            dp[i]=max(rob,skip);
        }
        return dp[0];
    }
};