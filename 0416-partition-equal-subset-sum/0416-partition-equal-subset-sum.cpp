class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        //tabulation 
        vector<vector<bool>>dp(n+1,vector<bool>(target+1,false));
        dp[n][0]=true;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=target;j++){
                bool inc=false;
                if(j>=nums[i]){
                    inc=dp[i+1][j-nums[i]];    
                }
                bool excl=dp[i+1][j];
                dp[i][j]=(inc||excl);

            }
        }
        return dp[0][target];
    }
};