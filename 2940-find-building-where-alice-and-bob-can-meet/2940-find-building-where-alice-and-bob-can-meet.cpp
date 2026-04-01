class Solution {
public:
vector<int>seg;
int n;
void build(int idx,int low,int high,vector<int>&heights){
    if(low==high){
        seg[idx]=heights[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*idx+1,low,mid,heights);
    build(2*idx+2,mid+1,high,heights);

    seg[idx]=max(seg[2*idx+1],seg[2*idx+2]);
}
int update(int idx,int low,int high,int l,int target){
    if(high<l ||  seg[idx]<=target) return -1;
    if(low==high){
        return low;
    }
    int mid=(low+high)/2;
    int left=update(2*idx+1,low,mid,l,target);
    if(left!=-1) return left;
    return update(2*idx+2,mid+1,high,l,target);
}

    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        int n=heights.size();
        seg.resize(4*n);
        build(0,0,n-1,heights);
        vector<int>ans;
        for(auto &q:queries){
            int a=q[0];
            int b=q[1];
            if(a>b){
                swap(a,b);
            }
            if(a==b || heights[a]<heights[b]){
                ans.push_back(b);
                continue;
            }
            int target=max(heights[a],heights[b]);
            int res=update(0,0,n-1,b+1,target);
            ans.push_back(res);
        }
        return ans;
    }
};