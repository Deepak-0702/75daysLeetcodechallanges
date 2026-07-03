class Solution {
public:
    int secondHighest(string s) {
        set<int>ans;
        for(char ch:s){
            if(isdigit(ch)){
                ans.insert(ch-'0');
            }
        }
        if(ans.size()<2) return -1;

        auto it=ans.end();
        it--;
        it--;
        return *it;
    }
};