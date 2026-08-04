class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int num:nums){
            freq[num]++;
            maxi=max(maxi,num);
            mini=min(mini,num);
        }
        vector<int>ans;
        for(int i=mini;i<=maxi;i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};