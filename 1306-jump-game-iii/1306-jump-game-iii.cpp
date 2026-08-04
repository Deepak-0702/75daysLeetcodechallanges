class Solution {
public:
bool helper(vector<int>&arr,int st,vector<bool>vis){
    if(st<0 || st>=arr.size()) return false;
    if(vis[st]) return false;
    if(arr[st]==0) return true;

    vis[st]=true;
    bool found=helper(arr,st+arr[st],vis) || helper(arr,st-arr[st],vis);

    return found;

}
    bool canReach(vector<int>& arr, int start) {
        vector<bool>vis(arr.size(),false);
        return helper(arr,start,vis);
    }
};