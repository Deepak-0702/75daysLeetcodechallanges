class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int di_ff=target-nums[i];
            if(map1.find(di_ff)!=map1.end()){
                return {map1[di_ff],i};
            }
            map1[nums[i]]=i;
        }
        return {};
    }
};