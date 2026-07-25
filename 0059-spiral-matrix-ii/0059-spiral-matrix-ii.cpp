class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int srow=0,erow=n-1;
        int scol=0,ecol=n-1;
        int idx=1;
        int end=n*n;
        while(srow<=erow && scol<=ecol && idx<=end){
            for(int j=scol;j<=ecol;j++){
                ans[srow][j]=idx;
                idx++;
            }
            for(int i=srow+1;i<=erow;i++){
                ans[i][ecol]=idx;
                idx++;
            }
            for(int j=ecol-1;j>=scol;j--){
                if(srow ==erow ) break;
                ans[erow][j]=idx;
                idx++;
            }
            for(int i=erow-1;i>srow;i--){
                if(scol==ecol) break;
                ans[i][scol]=idx;
                idx++;
            }
            srow++,scol++,erow--,ecol--;
        }
        return ans;
    }
};