class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(char ch:p){
            freq1[ch-'a']++;
        }
    
        for(int i=0;i<s.size();i++){
            freq2[s[i]-'a']++;
            if(i>=p.size()){
                freq2[s[i-p.size()]-'a']--;
            }
            if(i>=p.size()-1&& freq1==freq2){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};