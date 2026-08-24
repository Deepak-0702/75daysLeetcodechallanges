class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        int fresh=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        int ans=0;
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int x=p.first.first;
            int y=p.first.second;
            int time=p.second;
            ans=max(ans,time);
            for(int d=0;d<4;d++){
                int a=x+dx[d];
                int b=y+dy[d];
                if(a>=0 && a<m && b>=0 && b<n && grid[a][b]==1){
        
                    grid[a][b]=2;
                    fresh--;
                    q.push({{a,b},time+1});
                }
            }
        }
        if(fresh>0){
            return -1;
        }
        return ans;
        
    }
};