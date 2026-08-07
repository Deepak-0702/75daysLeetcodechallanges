class Solution {
public:
bool dfs(int i,int j,vector<vector<int>>&grid1,vector<vector<int>>&grid2){
    if(i<0 || j<0 ||i>=grid2.size() || j>=grid2[0].size() || grid2[i][j]==0){
        return true;
    }
    if(grid1[i][j]==0){
        return false;
    }
    grid2[i][j]=0;
    bool down=dfs(i+1,j,grid1,grid2);
    bool up =dfs(i-1,j,grid1,grid2);
    bool right=dfs(i,j+1,grid1,grid2);
    bool left=dfs(i,j-1,grid1,grid2);

    return up && down && right && left;
}
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m=grid2.size();
        int n=grid2[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1){
                    if(dfs(i,j,grid1,grid2)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};