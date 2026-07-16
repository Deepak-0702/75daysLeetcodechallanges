class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        //anagram means having same character with having each same freq 
        //and length of both string is same
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};