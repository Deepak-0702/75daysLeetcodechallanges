class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        int maxi=0;
        for(int num:nums){
            freq[num]++;
            maxi=max(maxi,freq[num]);
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