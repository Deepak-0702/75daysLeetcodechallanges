class Solution {
public:
long long helper(vector<int>& nums, long long target){
    int n=nums.size();
    int i=0;
    int j=n-1;
    long long count=0;
    while(i<j){
        long long sum=(long long) nums[i]+nums[j];
        if(sum<target){
            count+=(j-i);
            i++;
        }else{
            j--;
        }
    }
    return count;
}
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        return helper(nums, (long long)upper + 1)
             - helper(nums, lower);
    }
};