class Solution {
public:
    string reverseWords(string s) {
        vector<string>word;
        stringstream ss(s);//its avoid multiple space
        string token;
        while(ss >> token){
            word.push_back(token);
        }
        reverse(word.begin(),word.end());//array ke form me reverse ho gya hai
        string result;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(i>0){
                result+=" ";
                result+=word[i];
            }
            else{
                result+=word[i];
            }
        }
        return result;

    }
};