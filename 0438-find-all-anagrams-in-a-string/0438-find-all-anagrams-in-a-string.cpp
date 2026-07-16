class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<p.size();i++){
            freq1[p[i]-'a']++;
        }
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            freq2[s[i]-'a']++;
            if(i>=p.length()){
                freq2[s[i-p.length()]-'a']--;
            }
            if(i>=p.size()- 1 && freq1==freq2){
                ans.push_back(i-p.length()+1);
            }
        }
        return ans;
    }
};