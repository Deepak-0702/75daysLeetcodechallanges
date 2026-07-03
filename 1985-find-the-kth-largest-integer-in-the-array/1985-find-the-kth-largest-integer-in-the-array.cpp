class Solution {
public:
static bool greaterelement(string &a,string &b){
    if(a.size()!=b.size()){
        return a.size()>b.size();
    }
    return a>b;
}
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),greaterelement);
        return nums[k-1];
    }
};