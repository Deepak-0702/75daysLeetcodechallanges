class Solution {
public:
int sumOfDigit(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int idx=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int Sum=sumOfDigit(nums[i]);
            if(Sum==i){
                idx=min(idx,i);
            }
        }
        return idx==INT_MAX ? -1 :idx;
    }
};