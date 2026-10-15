
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini = INT_MAX;
        for(int num : nums) {
            if(abs(num) < abs(mini) || 
              (abs(num) == abs(mini) && num > mini)) {
                mini = num;
            }
        }
        return mini;
    }
};
