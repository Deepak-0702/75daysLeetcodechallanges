class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>s;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            int j=i+1 , k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum <0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int>tri={nums[i],nums[j],nums[k]};
                    sort(tri.begin(),tri.end());
                    if(s.find(tri)==s.end()){
                        s.insert(tri);
                        ans.push_back(tri);
                    }
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};