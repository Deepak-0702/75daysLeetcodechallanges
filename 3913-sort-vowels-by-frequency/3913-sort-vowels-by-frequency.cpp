class Solution {
public:
    bool isvowels(char ch){
        return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
    }
    string sortVowels(string s) {
        int n=s.size();
        unordered_map<char,int>freq;
        unordered_map<char,int>first_idx;
        for(int i=0;i<n;i++){
            if(isvowels(s[i])){
                freq[s[i]]++;
                if(first_idx.find(s[i])==first_idx.end()){
                    first_idx[s[i]]=i;
                }
            }
        }
        vector<char>vowels;
        for(auto &p:freq){
            for(int i=0;i<p.second;i++){
                vowels.push_back(p.first);
            }
        }
        sort(vowels.begin(),vowels.end(),[&](char a, char b){
            if(freq[a]!=freq[b]) return freq[a]>freq[b];
            return first_idx[a]<first_idx[b];
        });
        int idx=0;
        for(int i=0;i<n;i++){
            if(isvowels(s[i])){
                s[i]=vowels[idx];
                idx++;
            }
        }
        return s;
    }
};