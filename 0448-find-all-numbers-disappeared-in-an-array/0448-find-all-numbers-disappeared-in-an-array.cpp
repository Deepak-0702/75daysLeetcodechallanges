class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int i=1;i<=n;i++){
            s.insert(i);
        }
        for(int num:nums){
            s.erase(num);
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
    }
};