class Solution {
public:
int helper(int idx,int time,vector<int>&sat,vector<vector<int>>&dp){
    if(idx==sat.size()) return 0;
    
    if(dp[idx][time]!=-1) return dp[idx][time];
    int inc=sat[idx]*(time+1)+helper(idx+1,time+1,sat,dp);
    int excl=0+helper(idx+1,time,sat,dp);

    return dp[idx][time]=max(inc,excl);

}
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return helper(0,0,satisfaction,dp);
    }
};