class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            int left=0;
            for(int j=0;j<i;j++){
                left+=nums[j];
            }
            int right=0;
            for(int j=i;j<n;j++){
                right+=nums[j];
            }
            if(abs(left-right)%2==0){
                count++;
            }
        }
        return count;
    }
};