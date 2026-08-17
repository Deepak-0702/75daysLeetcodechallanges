class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<int>ans;
        for(int p:nums){
            if(freq[p]==1 && freq[p+1]==0 && freq[p-1]==0){
                ans.push_back(p);
            }
        }
        return ans;
    }
};