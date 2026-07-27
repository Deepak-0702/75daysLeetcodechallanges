class Solution {
public:
void helper(int idx,int prev,vector<int>&temp,vector<int>&nums,set<vector<int>>&st){
    if(idx==nums.size()){
        if(temp.size()>=2 ){
            st.insert(temp);
        }
        return ;
    }
    if(prev==-1 || (nums[idx]>=nums[prev])){
        temp.push_back(nums[idx]);
        helper(idx+1,idx,temp,nums,st);
        temp.pop_back();
    }
    helper(idx+1,prev,temp,nums,st);


}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>st;
        vector<int>temp;
        helper(0,-1,temp,nums,st);
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};