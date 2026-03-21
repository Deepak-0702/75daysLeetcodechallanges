class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto &p:freq){
            int val=p.second;
            if(val>n/2){
                return p.first;
            }
        }
        return -1;
    }
};