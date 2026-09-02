class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        for(int num:nums1){
            if(num%2==0 || num%2!=0){
                return true;
            }
        }
        return false;
    }
};