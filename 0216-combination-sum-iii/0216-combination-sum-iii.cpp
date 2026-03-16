class Solution {
public:
void helper(int idx,int k,int n,int sum,vector<vector<int>>&ans,vector<int>&combin){
    if(k==0 && sum==n){
        ans.push_back(combin);
        return;
    }
    if(k==0 && sum>n){
        return;
    }
    for(int i=idx;i<=9;i++){
        combin.push_back(i);
        helper(i+1,k-1,n,sum+i,ans,combin);
        combin.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>combin;
        helper(1,k,n,0,ans,combin);
        return ans;
    }
};