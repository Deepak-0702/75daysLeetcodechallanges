class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        bool flag=false;
        for(int num:nums){
            ans=ans^num;
            if(num!=0){
                flag=true;
            }

        }
        if(ans!=0){
            return nums.size();
        }
        if(flag){
            return nums.size()-1;
        }
        return 0;
    }
};