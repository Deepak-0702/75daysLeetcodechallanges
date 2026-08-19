class Solution {
public:

    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<int>cur(n+1,0);
        vector<int>next(n+1,0);
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int ans=0;
                if(text1[i]==text2[j]){

                    ans=1+next[j+1];
                }
                else{
                    ans=max(next[j],cur[j+1]);
                }
                cur[j]=ans;
            }
            next=cur;
        }
        return next[0];
    }
};