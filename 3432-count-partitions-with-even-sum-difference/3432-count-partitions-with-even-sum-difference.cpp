class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        long long sum=0;
        for(int num:nums){
            sum+=num;
        }
        for(int i=0;i<n-1;i++){
            int left=nums[i];
            int right=sum-left;
            if(abs(left-right)%2==0){
                count++;
            }
        }
        return count;
    }
};