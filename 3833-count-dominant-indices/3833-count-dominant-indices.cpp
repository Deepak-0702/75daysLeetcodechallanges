class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int ways=0;
        vector<int>suffix(n+1,0);
        
        for(int i=n-1;i>=0;i--){
            suffix[i]=suffix[i+1]+nums[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            int sum=suffix[i+1];
            int l=n-i-1;
            int avg=sum/l;
            if(nums[i]>avg){
                count++;
            }
        }
        return count;
    }
};