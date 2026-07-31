class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
    
        for(int i=0;i<intervals.size();i++){
            int a=intervals[i][0];
            int b=intervals[i][1];
            int c=newInterval[0];
            int d=newInterval[1];
            if(b<c){
                ans.push_back(intervals[i]);
            }
            else if(d<a){
                ans.push_back(newInterval);
                while(i<intervals.size()){
                    ans.push_back(intervals[i]);
                    i++;
                }
                return ans;
            }
            else{
                newInterval[0]=min(a,c);
                newInterval[1]=max(b,d);
            }

        }
        ans.push_back(newInterval);
        return ans;
        
    }
};