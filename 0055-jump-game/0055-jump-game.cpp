class Solution {
public:

    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxiReach=0;
        for(int i=0;i<n;i++){
            if(i>maxiReach){
                return false;
            }
            maxiReach=max(maxiReach,i+nums[i]);
        }
        return true;
    }
};