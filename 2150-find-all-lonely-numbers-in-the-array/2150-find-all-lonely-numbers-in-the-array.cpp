class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<int>ans;
        for(int x:nums){
            if(freq[x]==1 && freq[x-1]==0 && freq[x+1]==0){
                ans.push_back(x);
            }
        }
        return ans;
    }
};