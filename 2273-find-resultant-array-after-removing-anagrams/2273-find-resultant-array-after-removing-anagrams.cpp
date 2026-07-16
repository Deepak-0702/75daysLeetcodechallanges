class Solution {
public:
bool isAnagram(string a,string b){
    if(a.size()!=b.size()) return false;
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
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ana;
        ana.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(isAnagram(ana.back(),words[i])){
                continue;
            }
            ana.push_back(words[i]);
        }
        return ana;
    }
};