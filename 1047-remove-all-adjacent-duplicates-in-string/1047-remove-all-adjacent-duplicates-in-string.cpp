class Solution {
public:
    string removeDuplicates(string s) {
        vector<char>str;
        for(char ch:s){
            if(!str.empty() && str.back()==ch){
                str.pop_back();
            }
            else{
                str.push_back(ch);
            }
        }
        return string(str.begin(),str.end());
    }
};