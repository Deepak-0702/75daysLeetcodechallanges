class Solution {
public:
void helper(int n,string temp,vector<string>&ans,int open,int close){
    if(open==n && close==n){
        ans.push_back(temp);
        return;
    }
    if(open<n){
        helper(n,temp+"(",ans,open+1,close);
    }
    if(close<open){
        helper(n,temp+")",ans,open,close+1);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(n,"",ans,0,0);
        return ans;
    }
};