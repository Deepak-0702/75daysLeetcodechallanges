class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            if(num%2==0){
                freq[num]++;
            }
        }
        if(freq.empty()) return -1;
        int maxi=0;
        int mini=-1;
        for(auto &p:freq){
            if(p.second>maxi){
                maxi=p.second;
                mini=p.first;
            }
            else if(maxi==p.second){
                mini=min(mini,p.first);
            }
        }
        return mini;
    }
};