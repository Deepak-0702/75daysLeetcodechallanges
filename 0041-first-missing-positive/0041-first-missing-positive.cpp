class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    
        unordered_map<int,int>freq;
        for(int num:nums){
            if(num>=0){
                freq[num]++;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0){
                return i;
                break;
            }
        }
        return nums.size()+1;
    }
};