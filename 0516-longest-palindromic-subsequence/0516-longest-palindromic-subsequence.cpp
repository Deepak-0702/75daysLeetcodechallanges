class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int m=s.size();
        string revStr=s;
        reverse(revStr.begin(),revStr.end());
        int n=revStr.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int ans=0;
                if(s[i]==revStr[j]){
                    ans=1+dp[i+1][j+1];
                }else{
                    ans=max(dp[i+1][j],dp[i][j+1]);
                }
                dp[i][j]=ans;
            }
        }
        return dp[0][0];
    }
};