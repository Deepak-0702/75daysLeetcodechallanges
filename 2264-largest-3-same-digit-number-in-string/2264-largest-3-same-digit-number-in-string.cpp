class Solution {
public:
    string largestGoodInteger(string nums) {
        int n=nums.size();
        string ans="";
        for(int i=0;i<=n-3;i++){
            if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
                ans=max(ans,nums.substr(i,3));
            }
        }
        return ans;
    }
};