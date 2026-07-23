class Solution {
public:

    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin(),sat.end());
        int n=sat.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int idx=n-1;idx>=0;idx--){
            for(int time=idx;time>=0;time--){
                int inc=sat[idx]*(time+1)+dp[idx+1][time+1];
                int excl=dp[idx+1][time];
                dp[idx][time]=max(inc,excl);
            }
        }
        return dp[0][0];
    }
};