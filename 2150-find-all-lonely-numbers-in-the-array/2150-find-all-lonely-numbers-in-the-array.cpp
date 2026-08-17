class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<int>ans;
        for(auto &p:freq){
            int key=p.first;
            int val=p.second;
            if(val==1 && freq.find(key-1)==freq.end() && freq.find(key+1)==freq.end() ){
                ans.push_back(key);
            }
        }
        return ans;
    }
};