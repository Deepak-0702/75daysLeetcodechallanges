class NumArray {
public:
vector<int>arr;
vector<int>seg;
int n;
void build(int idx,int low,int high){
    if(low==high){
        seg[idx]=arr[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*idx+1,low,mid);
    build(2*idx+2,mid+1,high);
    
    seg[idx]=seg[2*idx+1]+seg[2*idx+2];
}
void updateseg(int idx,int low,int high,int i,int val){
    if(low==high){
        seg[idx]=val;
        arr[i]=val;
        return;
    }
    int mid=(low+high)/2;
    if(i<=mid){
        updateseg(2*idx+1,low,mid,i,val);
    }
    else{
        updateseg(2*idx+2,mid+1,high,i,val);
    }
    seg[idx]=seg[2*idx+1]+seg[2*idx+2];
}
int sumofquery(int idx,int low,int high,int l,int r){
    if(low>r || high<l) return 0;
    if(low>=l && high<=r) return seg[idx];
    int mid=(low+high)/2;
    int left=sumofquery(2*idx+1,low,mid,l,r);
    int right=sumofquery(2*idx+2,mid+1,high,l,r);
    return left+right;
}
    NumArray(vector<int>& nums) {
        arr=nums;
        n=nums.size();
        seg.resize(4*n);
        build(0,0,n-1);
    }
    
    void update(int index, int val) {
        updateseg(0,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return sumofquery(0,0,n-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */