class Solution {
public:
long long helper(int idx,long long sum,int target,vector<int>&nums,
vector<vector<long long>>&dp){
    if(idx==nums.size()){
        if(sum==target){
            return 1;
        }
        return 0;
    }

    long long op1=helper(idx+1,sum+nums[idx],target,nums,dp);
    long long op2=helper(idx+1,sum-nums[idx],target,nums,dp);

    return op1+op2;

}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<long long>>dp(n,vector<long long>(n,-1));
        long long  ways=helper(0,0,target,nums,dp);
        return (int)ways;
    }
};