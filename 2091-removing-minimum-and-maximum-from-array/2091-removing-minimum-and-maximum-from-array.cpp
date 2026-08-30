class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int idx1=-1;
        int idx2=-1;
       
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                idx1=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                idx2=i;
            }
        }

        int left=min(idx1,idx2);
        int right=max(idx1,idx2);
        //remove both element from left
        int op1=right+1;
        //remove both element from right
        int op2=n-left;
        //remove left from left side or right from right side
        int op3=(left+1)+(n-right);

        return min({op1,op2,op3});
    }
};