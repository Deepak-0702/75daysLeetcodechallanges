class Solution {
public:
bool isanagram(string a,string b){
    if(a.size()!=b.size()) return  false;
    vector<int>freq(26,0);
    for(int i=0;i<a.size();i++){
        freq[a[i]-'a']++;
        freq[b[i]-'a']--;
    }
    for(int i=0;i<freq.size();i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        int sl=s.size();
        int pl=p.size();
        vector<int>ans;
        for(int i=0;i<=sl-pl;i++){
            string str=s.substr(i,pl);
            if(isanagram(str,p)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};