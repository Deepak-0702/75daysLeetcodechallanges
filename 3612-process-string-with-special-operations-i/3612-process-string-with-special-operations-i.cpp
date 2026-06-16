class Solution {
public:
    string processStr(string s) {
        string st="";
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                st.push_back(s[i]);
            }
            else if(s[i]=='*'){
                if(!st.empty())
                st.pop_back();
            }
            else if(s[i]=='#'){
                st+=st;
            }
            else if(s[i]=='%'){
                reverse(st.begin(),st.end());
            }
        }
        return st;
    }
};