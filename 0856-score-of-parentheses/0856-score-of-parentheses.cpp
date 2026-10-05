class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                int curr=st.top();
                st.pop();
                int prev=st.top();
                st.pop();
                st.push(prev+max(2*curr,1));
            }
        }
        return st.top();
        
    }
};