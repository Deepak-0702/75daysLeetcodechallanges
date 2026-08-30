class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multi) {
        int n=nums.size();
        int m=multi.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,0));
        for(int i=m-1;i>=0;i--){
            for(int left=0;left<=i;left++){
                int right=i-left;
                //take from left
                int sum1=nums[left]*multi[i]+dp[i+1][left+1];

                //take from right
                int rightIdx=n-1-right;
                int sum2=nums[rightIdx]*multi[i]+dp[i+1][left];

                dp[i][left]=max(sum1,sum2);
            }
        }
        return dp[0][0];
    }
};