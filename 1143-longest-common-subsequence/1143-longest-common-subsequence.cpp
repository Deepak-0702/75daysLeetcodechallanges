class Solution {
public:
int helper(int i,int j,string &text1,string &text2,vector<vector<int>>&dp){
    int m=text1.size();
    int n=text2.size();
    if(i>=m || j>=n) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(text1[i]==text2[j]){
        ans=1+helper(i+1,j+1,text1,text2,dp);
    }
    else{
        ans=max(helper(i+1,j,text1,text2,dp),helper(i,j+1,text1,text2,dp));
    }
    return dp[i][j]=ans;
}
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(0,0,text1,text2,dp);
    }
};