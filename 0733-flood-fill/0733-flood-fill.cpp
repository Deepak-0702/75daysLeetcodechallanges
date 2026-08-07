class Solution {
public:
void dfs(int sr,int sc,int m,int n,int color,int originalColr,
vector<vector<int>>&image,vector<vector<bool>>&vis){
    if(sr<0 || sc<0 || sr>=m || sc>=n || vis[sr][sc] || image[sr][sc]!=originalColr){
        return ;
    }
    image[sr][sc]=color;
    vis[sr][sc]=true;
    dfs(sr-1,sc,m,n,color,originalColr,image,vis);
    dfs(sr+1,sc,m,n,color,originalColr,image,vis);
    dfs(sr,sc-1,m,n,color,originalColr,image,vis);
    dfs(sr,sc+1,m,n,color,originalColr,image,vis);

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));

        int originalColr=image[sr][sc];

        dfs(sr,sc,m,n,color,originalColr,image,vis);
        return image;

    }
};