class Solution {
public:
int helper(int idx,vector<int>&nums,int k,vector<int>&dp){
    int n=nums.size();
    if(idx==n) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int len=0;
    int maxi=INT_MIN;
    int maxSum=INT_MIN;
    for(int j=idx;j<min(idx+k,n);j++){
        len++;
        maxi=max(maxi,nums[j]);
        int curSum=(len*maxi)+helper(j+1,nums,k,dp);
        maxSum=max(maxSum,curSum);
    }
    return dp[idx]=maxSum;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>dp(arr.size(),-1);
        return helper(0,arr,k,dp);
    }
};


/*│
├── [5] → 5 + helper(1)
│           │
│           ├── [2] → 2 + helper(2)
│           │           │
│           │           ├── [3] → 3 + helper(3)
│           │           │           │
│           │           │           └── [4] → 4
│           │           │           │
│           │           │           └── 7
│           │           │
│           │           └── [3,4] → 8
│           │
│           └── helper(1) = 10
│
│       total = 5 + 10 = 15
│
└── [5,2] → 10 + helper(2)
                │
                └── helper(2) = 8

        total = 10 + 8 = 18*/
