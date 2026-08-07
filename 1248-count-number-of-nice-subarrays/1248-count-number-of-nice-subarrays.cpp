class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int oddcount=0;
        mp[oddcount]=1;
        int result=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                oddcount+=1;
            }

            if(mp.count(oddcount-k)){
                result+=mp[oddcount-k];
            }
            mp[oddcount]++;
            
        }
        return result;
    }
};