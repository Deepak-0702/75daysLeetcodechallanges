class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int count=0;
        for(char ch:s){
            if(ch=='('){
                count++;
                res=max(res,count);
            }
            if(ch==')'){
                count-=1;
            }
        }
        return res;
    }
};