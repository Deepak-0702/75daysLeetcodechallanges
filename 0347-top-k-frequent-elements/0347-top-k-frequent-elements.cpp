class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<pair<int,int>>ans(freq.begin(),freq.end());
        sort(ans.begin(),ans.end(),[](auto &a,auto &b){
            return a.second > b.second;
        });
        vector<int>result;
        int i=0,j=ans.size();
        while(i<j && k>0){
            result.push_back(ans[i].first);
            k--;
            i++;
        }
        return result;
    }
};