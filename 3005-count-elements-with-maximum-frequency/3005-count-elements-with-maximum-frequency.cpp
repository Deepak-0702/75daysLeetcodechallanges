class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }

        int maxi=0;
        for(auto &p:freq){
            maxi=max(maxi,p.second);
        }
        int sum=0;
        for(auto &p:freq){
            if(p.second==maxi){
                sum+=p.second;
            }
        }
        return sum;
    }
};