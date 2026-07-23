class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int idx=0;
        while(idx<s.size()){
            if(!st.empty() && st.top()==s[idx]){
                st.pop();
                idx++;
            }
            else{
                st.push(s[idx]);
                idx++;
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};