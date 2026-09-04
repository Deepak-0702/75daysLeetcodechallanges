class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int c0=0;
        int c1=0;
        int maxi=0;
        mp[0] = -1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c0++;
            }else{
                c1++;
            }
            int diff=c1-c0;
            if(mp.find(diff)!=mp.end()){
                maxi= max(maxi,i-mp[diff]);
            }
            else{
                mp[diff]=i;
            }
        }
        return maxi;
    }
};