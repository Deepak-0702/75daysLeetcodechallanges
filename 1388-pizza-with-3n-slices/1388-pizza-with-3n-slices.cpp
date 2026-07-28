class Solution {
public:
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        //as we know there is 2 case so that there is 2 loop used here
        //in top-down approach we used 0,k-2 then we used in tabulation from k-2,0
        //in top-down approach we used 1,k-1 then we used in tabulation from k-1,1
        vector<vector<int>>dp1(k+2,vector<int>(k+2,0));
        vector<vector<int>>dp2(k+2,vector<int>(k+2,0));
        //first case
        for(int i=k-2;i>=0;i--){
            for(int n=1;n<=k/3;n++){
                int pick=slices[i]+dp1[i+2][n-1];
                int notpick=dp1[i+1][n];

                dp1[i][n]=max(pick,notpick);
            }
        }
        int case1=dp1[0][k/3];
        //second case
        for(int i=k-1;i>=1;i--){
            for(int n=1;n<=k/3;n++){
                int pick=slices[i]+dp2[i+2][n-1];
                int notpick=dp2[i+1][n];

                dp2[i][n]=max(pick,notpick);
            }
        }
        int case2=dp2[1][k/3];

        return max(case1,case2);
    }
};