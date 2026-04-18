class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>curr=intervals[0];
        for(int i=1;i<n;i++){
            int a=curr[0];
            int b=curr[1];
            int c=intervals[i][0];
            int d=intervals[i][1];
            if(c<=b){
                curr={a,max(b,d)};
            }
            else{
                ans.push_back(curr);
                curr=intervals[i];
            }
        }
        ans.push_back(curr);
        return ans;
    }
};