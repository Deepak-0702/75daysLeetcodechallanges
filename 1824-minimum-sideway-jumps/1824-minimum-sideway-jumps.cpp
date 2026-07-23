class Solution {
public:
int helper(int lane,int idx,vector<int>&obs,vector<vector<int>>&dp)
{
    if(idx==obs.size()-1) return 0;
    if(dp[lane][idx]!=-1) return dp[lane][idx];
    if(obs[idx+1]!=lane){
        //-->(right move karenge)
       return  helper(lane,idx+1,obs,dp);

    }
    else{
        //side jump
        int mini=INT_MAX;
        for(int i=1;i<=3;i++){
            if(lane!=i && obs[idx]!=i){
                int ans=1+helper(i,idx+1,obs,dp);
                mini=min(mini,ans);
            }
        }
        return dp[lane][idx]=mini;
    }
    

}
    int minSideJumps(vector<int>& obstacles) {
        int n=obstacles.size();
        vector<vector<int>>dp(4,vector<int>(n,-1));
        return helper(2,0,obstacles,dp);
    }
};