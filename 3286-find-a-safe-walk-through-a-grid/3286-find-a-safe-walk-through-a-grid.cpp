class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,-1));
        queue<pair<pair<int,int>,int>>q;
        int starthealth=health-grid[0][0];
        if(starthealth<=0) return false;
        q.push({{0,0},starthealth});
        vis[0][0]=starthealth;

        int dr[4]={0,-1,0,1};
        int dc[4]={-1,0,1,0};

        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int h=q.front().second;
            q.pop();

            if(r==m-1 && c==n-1){
                return true;
            }

            for(int d=0;d<4;d++){
                int a=r+dr[d];
                int b=c+dc[d];

                if(a>=0 && a<m && b>=0 && b<n){
                    int newhealth=h-grid[a][b];
                    if(newhealth >0 && newhealth > vis[a][b]){
                        vis[a][b]=newhealth;
                        q.push({{a,b},newhealth});
                    }
                }
            }
        }
        return false;

    }
};