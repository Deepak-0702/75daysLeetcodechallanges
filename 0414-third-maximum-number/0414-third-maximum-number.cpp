class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        vector<int>ans(st.begin(),st.end());
        if(ans.size()<3){
            return ans.back();
        }
        nth_element(ans.begin(),ans.begin()+2,ans.end(),greater<int>());
        return ans[2];
    }
};