class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int curr_gcd=0;
            for(int j=i;j<n;j++){
                curr_gcd=gcd(curr_gcd,nums[j]);
                if(curr_gcd==k){
                    count++;
                }
                if(curr_gcd<k) break;
            }
        }
        return count;
    }
};