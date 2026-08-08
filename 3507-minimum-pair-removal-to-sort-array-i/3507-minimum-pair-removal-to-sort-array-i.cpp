class Solution {
public:
bool issorted(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
}
    int minimumPairRemoval(vector<int>& nums) {
        if(issorted(nums)) return 0;
        int count=0;
        while(!issorted(nums)){
            int mini=INT_MAX;
            int idx=-1;
            int  n=nums.size();
            for(int i=0;i<n-1;i++){
            int sum=nums[i]+nums[i+1];
            if(sum < mini) {
                    mini = sum;
                    idx = i;
                }
            }
            nums[idx]=mini;
            
            nums.erase(nums.begin()+idx+1);
            count++;
        }
        return count;
    }
};