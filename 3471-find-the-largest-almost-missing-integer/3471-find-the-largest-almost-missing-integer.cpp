class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(k == n) return *max_element(nums.begin(), nums.end());
        unordered_map<int,int>freq;
        for(int i=0;i<=n-k;i++){
            for(int j=i;j<min(i+k,n);j++){
                freq[nums[j]]++;
            }

        }
        int maxi=-1;
        for(auto &p:freq){
            int key=p.first;
            int val=p.second;
            if(val==1){
                maxi=max(maxi,key);
            }
        }
        return maxi;

    }
};