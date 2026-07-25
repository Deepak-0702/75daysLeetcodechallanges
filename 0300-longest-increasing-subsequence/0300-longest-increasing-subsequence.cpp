class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>currRow(n+1,0);
        vector<int>nextRow(n+1,0);
        for(int idx=n-1;idx>=0;idx--){
            for(int prev=idx-1;prev>=-1;prev--){
                int take=0;
                if(prev==-1 || nums[idx]>nums[prev]){
                    take=1+nextRow[idx+1];
                }
                int excl=nextRow[prev+1];
                currRow[prev+1]=max(take,excl);
            }
            nextRow=currRow;
        }
        return nextRow[0];
    }
};