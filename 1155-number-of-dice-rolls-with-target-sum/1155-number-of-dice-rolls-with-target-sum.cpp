class Solution {
public:
long long mod=1e9+7;
    int numRollsToTarget(int n, int k, int target) {
        //sapce optimzation
        vector<long long>prev(target+1,0);
        vector<long long>curr(target+1,0);
        prev[0]=1;
        for(int i=1;i<=n;i++){//as we know that at idx=0 we know that value already so we dont need to calculate 
            for(int j=1;j<=target;j++){
                long long ans=0;
                for(int z=1;z<=k;z++){
                    if(j-z>=0){
                        ans=(ans+prev[j-z])%mod;
                    }
                }
                curr[j]=ans;
            }
            prev=curr;
            
        }
        return (int)prev[target];
    }
};