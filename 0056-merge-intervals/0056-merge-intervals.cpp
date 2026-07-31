class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int>cur=intervals[0];
        vector<vector<int>>ans;
        int n=intervals.size();
        for(int i=1;i<n;i++){
            int a=cur[0];
            int b=cur[1];
            int c=intervals[i][0];
            int d=intervals[i][1];
            if(c<=b){
                cur={a,max(b,d)};
            }
            else{
                ans.push_back(cur);
                cur=intervals[i];
            }
        }
        ans.push_back(cur);
        return ans;
    }
};