class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int mini=INT_MAX;
        long long currsum=0;
        while(j<n){
            currsum+=nums[j];
            while(currsum>=target){
                mini=min(mini,j-i+1);
                currsum=currsum-nums[i];
                i++;
            }
            j++;
        }
        return mini==INT_MAX ? 0: mini;
    }
};