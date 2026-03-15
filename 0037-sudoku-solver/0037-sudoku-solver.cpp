class Solution {
public:
bool isSafe(int row,int col,vector<vector<char>>& board,char dig){
    //vertical
    for(int j=0;j<9;j++){
        if(board[row][j]==dig){
            return false;
        }
    }
    //horizontal
    for(int i=0;i<9;i++){
        if(board[i][col]==dig){
            return false;
        }
    }
    //grid
    int r=(row/3)*3;
    int c=(col/3)*3;
    for(int i=r;i<=r+2;i++){
        for(int j=c;j<=c+2;j++){
            if(board[i][j]==dig){
                return false;
            }
        }
    }
    return true;
}
bool helper(int i,int j,vector<vector<char>>&board){
    if(i==9){
        return true;
    }
    int nextR=i,nextC=j+1;
    if(nextC==9){
        nextR+=1;
        nextC=0;
    }
    if(board[i][j]!='.'){
        return helper(nextR,nextC,board);
    
    }
    for(char dig='1';dig<='9';dig++){
        if(isSafe(i,j,board,dig)){
            board[i][j]=dig;
            if(helper(nextR,nextC,board)){
                return true;
            }
            board[i][j]='.';
        }
    }
    return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        helper(0,0,board);

    }
};