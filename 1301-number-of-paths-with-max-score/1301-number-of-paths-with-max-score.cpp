class Solution {
public:
int mod=1e9+7;
pair<int,int> helper(int i,int j,vector<string>&board,vector<vector<pair<int,int>>>&dp){
    if(i<0 ||j<0) return {-1,0};
    if(board[i][j]=='X') return {-1,0};

    if(i==0  &&  j==0) return {0,1};
    if(dp[i][j].first!=-2) return dp[i][j];

    pair<int,int>up=helper(i-1,j,board,dp);
    pair<int,int>left=helper(i,j-1,board,dp);
    pair<int,int>diag=helper(i-1,j-1,board,dp);

    int maxi=max({up.first,left.first,diag.first});

    if(maxi==-1){
        return dp[i][j]={-1,0};
    }
    int ways=0;
    if(up.first==maxi){
        ways=(ways+up.second)%mod;
    }
    if(left.first==maxi){
        ways=(ways+left.second)%mod;
    }
    if(diag.first==maxi){
        ways=(ways+diag.second)%mod;
    }
    int val=0;
    if(board[i][j]!='S'){
        val=board[i][j]-'0';
    }
    return dp[i][j]={maxi+val,ways};


}
    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n=board.size();
        vector<vector<pair<int,int>>>dp(n,vector<pair<int,int>>(n,{-2,2}));
        pair<int,int>ans=helper(n-1,n-1,board,dp);
        if(ans.first==-1){
            return {0,0};
        }
        return {ans.first,ans.second};

    }
};