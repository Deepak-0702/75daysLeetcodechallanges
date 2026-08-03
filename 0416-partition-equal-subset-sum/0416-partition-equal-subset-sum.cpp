class Solution {
public:

    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<bool>>dp(nums.size()+1,vector<bool>(target+1,false));

        dp[nums.size()][0]=true;
        
        for(int idx=nums.size()-1;idx>=0;idx--){
            for(int j=0;j<=target;j++){

                bool take=false;
                if(j>=nums[idx]){
                    take=dp[idx+1][j-nums[idx]];
                }
                bool nottake=dp[idx+1][j];

                dp[idx][j]=take ||nottake;
            }
        }
        return dp[0][target];

    }
};