class Solution {
public:
bool solve(int st,vector<int>&arr,vector<bool>&visited){
    int n=arr.size();
    if(st<0 || st>=n){
        return false;
    }
    if(visited[st]){
        return false;
    }
    if(arr[st]==0){
        return true;
    }
    visited[st]=true;
    bool found=solve(st-arr[st],arr,visited)|| solve(st+arr[st],arr,visited);
    return found;
}
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<bool>visited(n,false);
        return solve(start,arr,visited);
    }
};