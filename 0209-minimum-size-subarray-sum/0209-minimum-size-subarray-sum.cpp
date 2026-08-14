class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int mini=INT_MAX;
        int sum=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            if(sum>=target){
                mini=min(mini,j-i+1);
                while(sum>=target){
                    sum-=nums[i];
                    i++;
                    if(sum>=target){
                        mini=min(mini,j-i+1);
                    }
                }
            }
        }
        return mini==INT_MAX ? 0:mini;
    }
};