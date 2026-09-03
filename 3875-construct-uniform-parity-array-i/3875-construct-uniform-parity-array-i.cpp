class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int even=0;
        int odd=0;
        for(int num:nums){
            if(num%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==nums.size() || odd==nums.size()) return true;

        // Agar dono parity present hain,
        // kisi odd-even pair ka difference odd hoga.
        // Is odd difference ko subtract karke parity change kar sakte hain.
        return true;
    }
};