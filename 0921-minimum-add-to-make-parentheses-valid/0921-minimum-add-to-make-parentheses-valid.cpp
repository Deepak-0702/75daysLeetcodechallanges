class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        for(char ch:s){
            if(ch=='('){
                st.push(ch);
            }
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }else{
                    st.push(ch);
                }
            }
        }
        int a=0,b=0;
        while(!st.empty()){
            char ch=st.top();
            if(ch=='('){
                a++;
            }else{
                b++;
            }
            st.pop();
        }
        return a+b;
    }
};