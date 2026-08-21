class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        // find smallest missing integer >= sum
        while(freq.find(sum)!=freq.end()){
            sum++;
        }
        return sum;
    }
};