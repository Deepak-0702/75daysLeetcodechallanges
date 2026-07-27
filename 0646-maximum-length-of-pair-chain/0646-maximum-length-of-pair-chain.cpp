class Solution {
public:
    int findLongestChain(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),[](vector<int>&a ,vector<int>&b){
            return a[1]<b[1];
        });
        int count=1;
        int lastend=nums[0][1];
        for(int i=1;i<nums.size();i++){
            if(nums[i][0]>lastend){
                count++;
                lastend=nums[i][1];
            }
        }
        return count;
    }
};