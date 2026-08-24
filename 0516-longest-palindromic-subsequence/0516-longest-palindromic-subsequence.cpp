class Solution {
public:
int helper(int i,int j,string &s,string &revStr,vector<vector<int>>&dp){
    int m=s.size();
    int n=revStr.size();
    if(i>=m || j>=n ) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(s[i]==revStr[j]){
        ans=1+helper(i+1,j+1,s,revStr,dp);
    }
    else{
        ans=max(helper(i+1,j,s,revStr,dp),helper(i,j+1,s,revStr,dp));
    }
    return dp[i][j]=ans;
}
    int longestPalindromeSubseq(string s) {
        int m=s.size();
        string revStr=s;
        reverse(revStr.begin(),revStr.end());
        int n=revStr.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));

        return helper(0,0,s,revStr,dp);
    }
};