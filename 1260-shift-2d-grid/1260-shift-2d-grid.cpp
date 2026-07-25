class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        //imagine the grid in the form a single array 1D form
        //shift the idx by the formula :-> newIndex = (index + k) % (m * n)
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int newidx=(i*n+j+k)%(m*n);
                int row=newidx/n;
                int col=newidx%n;
                ans[row][col]=grid[i][j];
            }
        }
        return ans;
    }
};