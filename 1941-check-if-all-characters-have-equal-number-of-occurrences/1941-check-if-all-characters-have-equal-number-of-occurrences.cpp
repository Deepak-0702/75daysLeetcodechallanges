class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        int freq=mp[s[0]];
        for(auto &p:mp){
            if(p.second!=freq){
                return false;
            }
        }
        return true;
    }
};