class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        //largest \(n/2\) squares ko positive positions aur smallest \(n/2\) squares ko negative positions par rakho.
        vector<long long>sq;
        for(int num:nums){
            sq.push_back(1LL*num*num);
        }
        sort(sq.begin(),sq.end());
        long long ans=0;
        int n=sq.size();
        for(int i=0;i<n;i++){
            if(i<n/2){
                ans-=sq[i];
            }else{
                ans+=sq[i];
            }
        }
        return ans;
    }
};