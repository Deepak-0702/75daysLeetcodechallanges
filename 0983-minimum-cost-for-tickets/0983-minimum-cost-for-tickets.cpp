class Solution {
public:
int helper(int idx,int n,vector<int>&days,vector<int>&costs,vector<int>&dp){
    if(idx>=n) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int option1=costs[0]+helper(idx+1,n,days,costs,dp);

    int i;
    for(i=idx;i<n && days[i]<days[idx]+7;i++);
    int option2=costs[1]+helper(i,n,days,costs,dp);

    for(i=idx;i<n && days[i]<days[idx]+30;i++);
    int option3=costs[2]+helper(i,n,days,costs,dp);

    return dp[idx]=min(option1,min(option2,option3));
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int>dp(n+1,-1);
        return helper(0,n,days,costs,dp);
    }
}; 