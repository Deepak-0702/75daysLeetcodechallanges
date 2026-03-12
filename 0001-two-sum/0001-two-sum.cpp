class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int di_ff=target-nums[i];
            if(map.find(di_ff)!=map.end()){
                return {map[di_ff],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};