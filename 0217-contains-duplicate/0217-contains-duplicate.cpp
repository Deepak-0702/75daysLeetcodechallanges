class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;//find() → O(log n) ,insert() → O(log n)
        for(int num:nums){
            if(s.find(num)!=s.end()){
                return true;
            }
            s.insert(num);
        }
        return false;

        //so total time complexity:- is O(n log n)
        //so total space complexity:- is O(n)
    }
};