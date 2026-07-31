class Solution {
public:
void helper(int idx,int end,long long sum,vector<int>&nums,vector<long long>&ans)
{
    if(idx==end){
        ans.push_back(sum);
        return;
    }

    helper(idx+1,end,sum+nums[idx],nums,ans);

    helper(idx+1,end,sum,nums,ans);

}
    int minAbsDifference(vector<int>& nums, int goal) {
        int n=nums.size();
        vector<long long>left;
        vector<long long>right;

        helper(0,n/2,0,nums,left);
        helper(n/2,n,0,nums,right);

        sort(right.begin(),right.end());

        long long ans=LLONG_MAX;
        for(long long i:left){
            long long need=goal-i;
            auto it=lower_bound(right.begin(),right.end(),need);
            if(it!=right.end()){
                ans=min(ans,llabs(i+*it-goal));
            }
            if(it != right.begin()){
                --it;
                ans = min(ans, llabs(i+ *it - goal));
            }
        }
        return ans;
    }
};