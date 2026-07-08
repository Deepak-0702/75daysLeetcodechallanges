class Solution {
public:
int helper(int idx,vector<int>&points,vector<int>&dp){
    if(idx>=points.size()){
        return 0;
    }
    if(dp[idx]!=-1) return dp[idx];
    int rob=points[idx]+helper(idx+2,points,dp);
    int skip=helper(idx+1,points,dp);
    return dp[idx]=max(rob,skip);
}
    int deleteAndEarn(vector<int>& nums) {
        vector<int>freq(10001,0);
        for(int num:nums){
            freq[num]++;
        }
        vector<int>points(10001,0);
        for(int i=1;i<=10000;i++){
            points[i]=i*freq[i];
        }
        vector<int>dp(10001,-1);
        return helper(0,points,dp);
    }
};