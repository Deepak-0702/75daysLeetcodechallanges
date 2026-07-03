class Solution {
public:
    int secondHighest(string s) {
        set<int>ans;
        for(char ch:s){
            if(isdigit(ch)){
                ans.insert(ch-'0');
            }
        }
        vector<int>res(ans.begin(),ans.end());
        int n=res.size();
        if(n<2) return -1;
        return res[n-2];
    }
};