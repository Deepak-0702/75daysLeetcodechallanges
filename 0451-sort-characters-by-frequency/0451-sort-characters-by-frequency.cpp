class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        vector<pair<char,int>>vec(freq.begin(),freq.end());
        sort(vec.begin(),vec.end(),[](auto &a ,auto &b){
            return a.second>b.second;
        });
        string str="";
        for(auto &p:vec){
            //this is the type constructor in c++
            //string s = string(int count , char ch);
            //exam string s=string(3,'a') s="aaa"
            str+=string(p.second,p.first);
        }
        return str;

    }
};