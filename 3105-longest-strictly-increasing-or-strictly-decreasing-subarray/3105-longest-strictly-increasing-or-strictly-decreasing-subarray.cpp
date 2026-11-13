class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi1=1;
        int maxi2=1;
        int maxi=1;
        for(int j=1;j<n;j++){
            if(nums[j]>nums[j-1]){
                maxi1++;
                maxi2=1;
            }else if(nums[j]<nums[j-1]){
                maxi2++;
                maxi1=1;
            }
            else{
                maxi1=1;
                maxi2=1;
            }
            maxi=max(maxi,max(maxi1,maxi2));
        }
        return maxi;
    }
};