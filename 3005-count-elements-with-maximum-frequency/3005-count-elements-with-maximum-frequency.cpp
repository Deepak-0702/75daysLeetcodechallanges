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
        int sum=0;
        for(int i=0;i<n;i++){
            if(freq[nums[i]]==maxi){
                sum++;
            }
        }
        return sum;
    }
};