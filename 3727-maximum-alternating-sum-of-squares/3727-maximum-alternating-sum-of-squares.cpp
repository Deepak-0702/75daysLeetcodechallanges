class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        //largest \(n/2\) squares ko positive positions aur smallest \(n/2\) squares ko negative positions par rakho.
        vector<long long>sq;
        for(int num:nums){
            sq.push_back(1LL*num*num);
        }

        int n=sq.size();
        int mid=n/2;
        nth_element(sq.begin(),sq.begin()+mid,sq.end());
        long long ans=0;
        for(int i=0;i<mid;i++){
            ans-=sq[i];
        }
        for(int i=mid;i<n;i++){
            ans+=sq[i];
        }
        return ans;
    }
};