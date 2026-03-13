class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int num:nums){
            map[num]++;
        }
        for(auto &p:map){
            int val=p.second;
            if(val>1){
                return true;
            }
        }
        return false;
    }
};