class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>st;
        for(int num:nums){
            st.insert(num);
        }
        int n=nums.size();
        int k=st.size();
        unordered_map<int,int>mp;
        int ans=0;
        int i=0;
        for(int j=0;j<n;j++){
            mp[nums[j]]++;
            while(mp.size()==k){
                ans+=nums.size()-j;
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            
        }
        return ans;
    }
};