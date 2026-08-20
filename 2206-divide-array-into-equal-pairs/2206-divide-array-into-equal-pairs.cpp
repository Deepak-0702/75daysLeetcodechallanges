class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        if(n%2!=0) return false;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto &p:freq){
            int key=p.first;
            int val=p.second;
            if(val%2!=0){
                return false;
            }
            
        }
        return true;

    }
};