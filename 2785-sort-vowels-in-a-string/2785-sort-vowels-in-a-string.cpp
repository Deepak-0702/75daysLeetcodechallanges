class Solution {
public:
bool isvowels(char ch){
    return (ch == 'A' || ch == 'a' ||
            ch == 'E' || ch == 'e' ||
            ch == 'I' || ch == 'i' ||
            ch == 'O' || ch == 'o' ||
            ch == 'U' || ch == 'u');
}
    string sortVowels(string s) {
        string str="";
        for(char ch:s){
            if(isvowels(ch)){
                str+=ch;
            }
        }
        sort(str.begin(),str.end());
        string t="";
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(isvowels(s[i])){
                t+=str[idx];
                idx++;
            }
            else{
                t+=s[i];
            }
        }
        return t;
    }
};