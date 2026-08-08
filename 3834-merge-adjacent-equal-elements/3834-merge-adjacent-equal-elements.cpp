class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
            while(ans.size()>=2){
                int n=ans.size();
                if(ans[n-1]==ans[n-2]){
                    long long sum=ans[n-1]+ans[n-2];
                    ans.pop_back();
                    ans.pop_back();
                    ans.push_back(sum);
                }
                else{
                    break;
                }


            }
        }
        return ans;
    }
};