class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        unordered_set<int>st;
        int count=0;
        for(int f:freq){
            while(st.count(f)&& f>0){
                count++;
                f--;
            }
            st.insert(f);
        }
        return count;
    }
};