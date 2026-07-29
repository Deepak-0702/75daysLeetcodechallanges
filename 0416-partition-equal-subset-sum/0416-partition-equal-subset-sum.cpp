class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        //space optimization
        vector<bool>curr(sum+1,false);
        vector<bool>next(sum+1,false);
        curr[0]=true;
        next[0]=true;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=target;j++){
                bool inc=false;
                if(j>=nums[i]){
                    inc=next[j-nums[i]];    
                }
                bool excl=next[j];
                curr[j]=(inc||excl);

            }
            next=curr;
        }
        return next[target];
    }
};