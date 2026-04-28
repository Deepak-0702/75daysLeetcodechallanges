class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,candi=0;
        for(int num:nums){
            if(c==0){
                candi=num;
            }
            if(num==candi){
                c++;
            }
            else{
                c--;
            }
        }
        return candi;
    }
};