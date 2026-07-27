class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();

        int pro1=1;
        int maxi1=INT_MIN;
        for(int i=0;i<n;i++){
            if(pro1==0){
                pro1=1;
            }
            pro1=pro1*nums[i];
            maxi1=max(maxi1,pro1);
        }

        int maxi2=INT_MIN;
        int pro2=1;
        for(int i=n-1;i>=0;i--){
            if(pro2==0){
                pro2=1;
            }
            pro2*=nums[i];
            maxi2=max(maxi2,pro2);
        }
        return max(maxi1,maxi2);
    }
};