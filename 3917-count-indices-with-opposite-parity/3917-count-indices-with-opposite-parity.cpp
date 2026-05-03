class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        int odd=0;
        for(int num:nums){
            if(num%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even--;
                ans[i]=odd;
            }
            else{
                odd--;
                ans[i]=even;
            }
        }
        return ans;
    }
};