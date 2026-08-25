class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>mp;
        for(int num:nums){
            mp.insert(num);
        }
        int i=1;
        int num;
        while(true){
            num=i*k;
            if(mp.find(num)==mp.end()){
                return num;
                
            }
            i++;
        }
        
    }
};