class Solution {
public:
int sumofelement(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int d=sumofelement(nums[i]);
            mini=min(mini,d);
        }
        return mini;
    }
};