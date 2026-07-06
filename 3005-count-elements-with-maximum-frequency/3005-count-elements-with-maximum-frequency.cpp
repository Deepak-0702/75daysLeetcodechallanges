class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int maxi=0;
        for(auto &p:freq){
            maxi=max(maxi,p.second);

        }
        int ans=0;
        for(auto &p:freq){
            if(p.second==maxi){
                ans+=p.second;
            }
        }
        return ans;
    }
};