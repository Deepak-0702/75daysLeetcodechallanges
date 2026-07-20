class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        int maxi=0;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int right=dp[i][j+1];
                int down=dp[i+1][j];
                int diag=dp[i+1][j+1];
                if(matrix[i][j]=='1'){
                    dp[i][j]=1+min(right,min(down,diag));
                    maxi=max(maxi,dp[i][j]);
                    
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        return maxi*maxi;
    }
};