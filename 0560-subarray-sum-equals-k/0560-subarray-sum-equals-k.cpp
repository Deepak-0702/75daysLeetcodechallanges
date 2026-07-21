class Solution {
public:
int helper(int idx,vector<int>&nums,int k){
    if(idx==nums.size()){
        return 0;
    }
    int sum=0;
    int count=0;
    for(int i=idx;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k){
            count++;
        }
    }
    return count+helper(idx+1,nums,k);
}
    int subarraySum(vector<int>& nums, int k) {
        return helper(0,nums,k);
    }
};