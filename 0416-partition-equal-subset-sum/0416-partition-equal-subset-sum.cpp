class Solution {
public:

    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<bool>curr(sum+1,false);
        vector<bool>next(sum+1,false);

        curr[0]=true;
        next[0]=true;
        for(int idx=nums.size()-1;idx>=0;idx--){
            for(int j=0;j<=target;j++){

                bool take=false;
                if(j>=nums[idx]){
                    take=next[j-nums[idx]];
                }
                bool nottake=next[j];

                curr[j]=take ||nottake;
            }
            next=curr;
        }
        return next[target];

    }
};