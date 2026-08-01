class Solution {
public:

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];

        //tabulation
        int prev2=0;
        int prev1=0;
        for(int i=n-2;i>=0;i--){
            int rob=prev2+nums[i];
            int skip=prev1;
            int ans=max(rob,skip);
            prev2=prev1;
            prev1=ans;
        }
        int case1=prev1;

        prev1=0;
        prev2=0;
        
        for(int i=n-1;i>=1;i--){
            int rob=prev2+nums[i];
            int skip=prev1;
            int ans=max(rob,skip);
            prev2=prev1;
            prev1=ans;
        }
        int case2=prev1;

        return max(case1,case2);
        
    }
};