class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixGcd(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            prefixGcd[i]=gcd(maxi,nums[i]);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0;
        int j=prefixGcd.size()-1;
        long long sum=0;
        while(i<j){
            sum+=gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }
        return sum;

    }
}; 