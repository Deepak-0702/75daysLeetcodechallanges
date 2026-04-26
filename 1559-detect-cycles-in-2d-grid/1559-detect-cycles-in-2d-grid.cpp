class Solution {
public:
    bool bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int row, int col, char ch){
        int m = grid.size(), n = grid[0].size();
        queue<pair<pair<int,int>,pair<int,int>>>q;
        q.push({{row,col},{-1,-1}});
        vis[row][col]=1;
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            int currRow=p.first.first;
            int currCol=p.first.second;
            int parRow=p.second.first;
            int parCol=p.second.second;
            int rowCor[4]={-1,1,0,0};
            int colCor[4]={0,0,-1,1};
            for(int d=0;d<4;d++)
            {
                int nrow=currRow+rowCor[d];
                int ncol=currCol+colCor[d];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==ch)
                {
                    if(nrow==parRow &&ncol==parCol) continue;
                    else{
                        if(vis[nrow][ncol]) return true;
                        else{
                            q.push({{nrow,ncol},{currRow,currCol}});
                            vis[nrow][ncol]=1;
                        }
                    }
                }
            }

        }
        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>>vis(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!vis[i][j]){
                    if(bfs(grid, vis, i, j, grid[i][j])) return true;
                }
            }
        }
        return false;
    }
};