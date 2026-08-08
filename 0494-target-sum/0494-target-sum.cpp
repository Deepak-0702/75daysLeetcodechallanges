class Solution {
public:
long long helper(int idx,long long sum,int target,vector<int>&nums){
    if(idx==nums.size()){
        if(sum==target){
            return 1;
        }
        return 0;
    }

    long long op1=helper(idx+1,sum+nums[idx],target,nums);
    long long op2=helper(idx+1,sum-nums[idx],target,nums);

    return op1+op2;

}
    int findTargetSumWays(vector<int>& nums, int target) {
        long long  ways=helper(0,0,target,nums);
        return (int)ways;
    }
};