class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int num:arr){
            freq[num]++;
        }
        unordered_set<int>st;
        for(auto &p:freq){
            if(st.count(p.second)){
                return false;
            }
            st.insert(p.second);
        }
        return true;
    }
};