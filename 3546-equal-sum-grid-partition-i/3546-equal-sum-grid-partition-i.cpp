class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        long long  totalsum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                totalsum+=grid[i][j];
            }
        }
        if(totalsum%2!=0) return false;
        //horizontal
        long long target=totalsum/2;
        long long currSum=0;
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n;j++){
                currSum+=grid[i][j];
            }
            if(currSum==target) return true;
        }
        long long curSum=0;
        for(int j=0;j<n-1;j++){
            for(int i=0;i<m;i++){
                curSum+=grid[i][j];
            }
            if(curSum==target) return true;
        }
        return false;
    }
};