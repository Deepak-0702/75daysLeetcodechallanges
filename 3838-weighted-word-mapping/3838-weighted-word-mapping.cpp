class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string str="";
        for(string &word:words){
            int sum=0;
            for(char ch:word){
                sum+=weights[ch-'a'];
            }
            int r=sum%26;
            str+='z'-r;
        }
        return str;
    }
};