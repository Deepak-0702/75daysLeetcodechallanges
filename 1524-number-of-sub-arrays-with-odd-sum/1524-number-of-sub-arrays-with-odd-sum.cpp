class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int sum=0;
        int even=1;
        int odd=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum%2!=0){
                count=(count+even)%mod;
                odd++;
            }else{
                count=(count+odd)%mod;
                even++;
            }
            
        }
        return count%mod;
    }
};