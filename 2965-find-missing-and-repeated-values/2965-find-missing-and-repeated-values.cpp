class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n=grid.size();

        vector<int> freq(n*n+1,0);

        for(auto &row:grid){
            for(int x:row)
                freq[x]++;
        }

        int repeat,missing;

        for(int i=1;i<=n*n;i++){

            if(freq[i]==2)
                repeat=i;

            if(freq[i]==0)
                missing=i;
        }

        return {repeat,missing};
    }
};