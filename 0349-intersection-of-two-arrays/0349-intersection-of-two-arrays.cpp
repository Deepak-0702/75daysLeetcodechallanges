class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        for(int num:nums1){
            s.insert(num);
        }
        vector<int>ans;
        for(int num:nums2){
            if(s.count(num)){
                ans.push_back(num);
                s.erase(num);
            }
        }
        return ans;
    }
};