class Solution {
public:
bool ispalindrome(string &s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int helper(int idx,string &s,vector<int>&dp){
    if(idx==s.length()){
        return 0;
    }
    if(dp[idx]!=-1) return dp[idx];
    string temp="";
    int mini=INT_MAX;
    
    for(int i=idx;i<s.length();i++){
        temp+=s[i];
        if(ispalindrome(temp)){
            int cost=1+helper(i+1,s,dp);
            mini=min(mini,cost);
        }
    }
    return dp[idx]=mini;
}
    int minCut(string s) {
        vector<int>dp(s.length(),-1);
        return helper(0,s,dp)-1;
    }
};