class Solution {
public:
int helper(int idx,vector<int>&temp,vector<int>&nums){
    if(idx==nums.size()){
        int ans=0;
        for(int i=0;i<temp.size();i++){
            ans^=temp[i];
        }
        return ans;
    }

    temp.push_back(nums[idx]);
    int op1=helper(idx+1,temp,nums);
    temp.pop_back();
    int op2=helper(idx+1,temp,nums);
    return op1+op2;
}
    int subsetXORSum(vector<int>& nums) {
        vector<int>temp;
        int sum=helper(0,temp,nums);
        return sum;
    }
};