class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closetsum=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int first=nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=first+nums[j]+nums[k];
                if(abs(sum-target)<abs(closetsum-target)){
                    closetsum=sum;
                }
                if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    return sum;
                }
            }
        }
        return closetsum;
    }
};