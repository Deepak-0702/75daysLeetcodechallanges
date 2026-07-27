class Solution {
public:
    int helper(int start, vector<int>& nums, int k) {

        long long pro = 1;
        int cnt = 0;

        for (int end = start; end < nums.size(); end++) {

            pro *= nums[end];

            if (pro < k)
                cnt++;
            else
                break;
        }

        return cnt;
    }

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k<=1) return 0;

        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans += helper(i, nums, k);
        }

        return ans;
    }
};