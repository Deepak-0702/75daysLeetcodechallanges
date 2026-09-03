class Solution {
public:
bool isodd(vector<int>&nums1){
    bool flag=false;
    for(int num:nums1){
        if(num%2!=0){
            flag=true;
        }
    }
    if(flag){
        return true;
    }
    return false;
}
bool iseven(vector<int>&nums1){
    bool flag=false;
    for(int num:nums1){
        if(num%2==0){
            flag=true;
        }
    }
    if(flag){
        return true;
    }
    return false;
}
    bool uniformArray(vector<int>& nums1) {
        int idx=0;
        int ans=0;
        for(int num:nums1){
            if(num%2==0){
                nums1[idx]=num;
                ans=num;
                idx++;
            }
            else{
                nums1[idx]=num-ans;
                ans=num;
                idx++;
            }
        }
        if(iseven(nums1) || isodd(nums1)) return true;
        return false;
    }
};