class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        unordered_set<int>st;
        int A,B;
        int sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum+=grid[i][j];
                if(st.find(grid[i][j])!=st.end()){
                    A=grid[i][j];

                }
                else{
                    st.insert(grid[i][j]);
                }
            }
        }
        int total=(m*n)*(m*n+1)/2;
        B=total+A-sum;
        return {A,B};
    }
};