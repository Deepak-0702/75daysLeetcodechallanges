class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxi = 1;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                bool valid = true;
                for(int k = i; k < j; k++) {
                    if(gcd(nums[k], nums[j]) != 1) {
                        valid = false;
                        break;
                    }
                }
                if(!valid) {
                    if(j-i+1 == 2) {
                        maxi = max(maxi, 2);
                    }
                    break;
                }
                maxi = max(maxi, j-i+1);
            }
        }

        return maxi;
    }
};