class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        //avoid map use xor operator to solve it
        long long xr=0;
        for(int num:nums){
            xr^=num;
        }
        long long diff= xr & (-xr);

        long long a=0;
        long long b=0;
        for(int num:nums){
            if(num & diff){//non zero
                a^=num;
            }else{
                b^=num;
            }
        }
        return {(int)a,(int)b};
    }
};