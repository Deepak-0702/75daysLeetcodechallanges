class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        for(int num:arr){
            freq[num]++;
        }
        int idx=1;
        int count=0;
        while(true){
            if(freq.find(idx)==freq.end()){
                count++;

            }
            if(count==k){
                return idx;
            }
            idx++;
        }
        return -1;
    }
};