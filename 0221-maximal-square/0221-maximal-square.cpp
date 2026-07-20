class Solution {
public:
int helper(int i,int j,int m,int n,vector<vector<char>>&matrix,int &maxi,vector<vector<int>>&dp){
    if(i>=m || j>=n) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int right=helper(i,j+1,m,n,matrix,maxi,dp);
    int down=helper(i+1,j,m,n,matrix,maxi,dp);
    int diag=helper(i+1,j+1,m,n,matrix,maxi,dp);
    if(matrix[i][j]=='1'){
        int ans=1+min(right,min(down,diag));
        maxi=max(maxi,ans);
        return dp[i][j]=ans;
    }else{
        return dp[i][j]=0;
    }

}
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n+1,-1));
        int maxi=0;
        helper(0,0,m,n,matrix,maxi,dp);
        return maxi*maxi;

    }
};