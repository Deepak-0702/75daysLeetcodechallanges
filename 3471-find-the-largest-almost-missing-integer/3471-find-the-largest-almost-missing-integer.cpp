class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(k == n) return *max_element(nums.begin(), nums.end());
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int maxi=-1;
        if(k==1){
            for(auto &p:freq){
                if(p.second==1){
                    maxi=max(maxi,p.first);
                }
            }
            return maxi;
        }
        int ans=-1;
        if (freq[nums[0]] == 1)
            ans = max(ans, nums[0]);

        if (freq[nums[n-1]] == 1)
            ans = max(ans, nums[n-1]);

        return ans;

    }
};