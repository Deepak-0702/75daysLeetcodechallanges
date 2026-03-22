class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        vector<int>curr=intervals[0];
        for(int i=1;i<intervals.size();i++){
            int a=curr[0];
            int b=curr[1];
            int c=intervals[i][0];
            int d=intervals[i][1];
            if(c<=b){
                curr[1]=max(b,d);
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