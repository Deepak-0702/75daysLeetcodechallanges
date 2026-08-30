class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        set<int>st;
        int count=0;
        for(auto &p:freq){
            int val=p.second;
            while(st.count(val)&& val>0){
                count++;
                val--;
            }
            st.insert(val);
        }
        return count;
    }
};