class Solution {
public:

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];

        //tabulation
        vector<int>dp1(n+2,0);
        for(int i=n-2;i>=0;i--){
            int rob=nums[i]+dp1[i+2];
            int skip=dp1[i+1];
            dp1[i]=max(rob,skip);
        }
        int case1=dp1[0];

        vector<int>dp2(n+2,0);
        for(int i=n-1;i>=1;i--){
            int rob=nums[i]+dp2[i+2];
            int skip=dp2[i+1];
            dp2[i]=max(rob,skip);
        }
        int case2=dp2[1];

        return max(case1,case2);
        
    }
};