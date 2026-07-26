class Solution {
public:
bool check(vector<int>& curr, vector<int>& prev){
    return prev[0] <= curr[0] &&
           prev[1] <= curr[1] &&
           prev[2] <= curr[2];

}
int helper(int idx,int prev,vector<vector<int>>&cuboids,vector<vector<int>>&dp){
    if(idx==cuboids.size()) return 0;
    if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];

    int take=0;
    if(prev==-1 || check(cuboids[idx],cuboids[prev])){
        take=cuboids[idx][2]+helper(idx+1,idx,cuboids,dp);
    }
    int excl=helper(idx+1,prev,cuboids,dp);
    return dp[idx][prev+1]=max(take,excl);
}
    int maxHeight(vector<vector<int>>& cuboids) {
        int n=cuboids.size();
        //sort all dimension for every cuboids
        for(int i=0;i<n;i++){
            sort(cuboids[i].begin(),cuboids[i].end());
        }
        //sort all cuboids on the basis of w and l;
        sort(cuboids.begin(),cuboids.end());//lexographically order me sort karta hai

        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return helper(0,-1,cuboids,dp);
    }
};