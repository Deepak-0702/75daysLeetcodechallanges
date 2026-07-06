class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int m=intervals.size();
        sort(intervals.begin(),intervals.end(),[](auto &a ,auto &b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });
        int count=0;
        int maxiend=0;
        for(auto &e:intervals){
            int u=e[1];
            if(u>maxiend){
                maxiend=u;
                count++;
            }
        }
        return count;

    }
};