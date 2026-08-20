class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int prev1=nums[0];
        int prev2=nums[1];
        for(int i=2;i<n;i++){
            if(prev1>prev2){
                arr1.push_back(nums[i]);
                prev1=nums[i];
            }
            else{
                arr2.push_back(nums[i]);
                prev2=nums[i];
            }
        }
        vector<int>ans;
        int i=0;
        int m=arr1.size();
        while(i<m){
            ans.push_back(arr1[i]);
            i++;
        }
        int j=0;
        int p=arr2.size();
        while(j<p){
            ans.push_back(arr2[j]);
            j++;
        }
        return ans;
    }
};