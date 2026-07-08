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
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>freq(maxi+1,0);
        for(int num:nums){
            freq[num]++;
        }
        vector<int>points(maxi+1,0);
        for(int i=1;i<=maxi;i++){
            points[i]=i*freq[i];
        }
        vector<int>dp(maxi+1,-1);
        return helper(0,points,dp);
    }
};