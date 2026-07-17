class Solution {
public:
bool isPerm(string s, string p){
    unordered_map<char,char>mp1;
    unordered_map<char,char>mp2;
    for(int i=0;i<s.size();i++){
        if(mp1.find(s[i])!=mp1.end()){
            if(mp1[s[i]]!=p[i]){
                return false;
            }
        }else{
            mp1[s[i]]=p[i];
        }
        if(mp2.find(p[i])!=mp2.end()){
            if(mp2[p[i]]!=s[i]){
                return false;
            }
        }else{
            mp2[p[i]]=s[i];
        }
    }
    return true;
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            if(isPerm(words[i],pattern)){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};