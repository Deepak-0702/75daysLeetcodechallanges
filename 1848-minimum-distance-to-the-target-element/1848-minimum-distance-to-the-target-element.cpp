class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        int idx=0;
        int mini=INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i]==target){
                idx=i;
                mini=min(mini,abs(idx-start));
            }
        }
        return mini;
    }
};