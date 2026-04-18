class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int n=nums.size();
        for(auto &p:freq){
            if(p.second>n/3){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};