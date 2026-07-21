class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        //first we find a pivot idx;
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        //pivot=-1 which means this one is first nums array 
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        int i=idx+1 ,j=n-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};