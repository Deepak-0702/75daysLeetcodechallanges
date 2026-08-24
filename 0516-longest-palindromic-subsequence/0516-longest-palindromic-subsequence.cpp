class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int m=s.size();
        string revStr=s;
        reverse(revStr.begin(),revStr.end());
        int n=revStr.size();
        vector<int>curr(n+1,0);
        vector<int>next(n+1,0);
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int ans=0;
                if(s[i]==revStr[j]){
                    ans=1+next[j+1];
                }else{
                    ans=max(next[j],curr[j+1]);
                }
                curr[j]=ans;
            }
            next=curr;
        }
        return next[0];
    }
};