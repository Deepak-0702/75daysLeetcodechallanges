class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int num:nums){
            sum2+=num;
        }
        for(int i=0;i<nums.size();i++){
            sum2-=nums[i];
            if(sum1==sum2){
                return i;
            }
            sum1+=nums[i];
        }
        return -1;
    }
};