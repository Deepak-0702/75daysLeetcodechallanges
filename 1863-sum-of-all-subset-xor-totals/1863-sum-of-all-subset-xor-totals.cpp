class Solution {
public:
int helper(int idx,int currXor,vector<int>&nums){
    if(idx==nums.size()){
        return currXor;
    }
    int op1=helper(idx+1,currXor^nums[idx],nums);

    int op2=helper(idx+1,currXor,nums);
    return op1+op2;
}
    int subsetXORSum(vector<int>& nums) {
        int sum=helper(0,0,nums);
        return sum;
    }
};