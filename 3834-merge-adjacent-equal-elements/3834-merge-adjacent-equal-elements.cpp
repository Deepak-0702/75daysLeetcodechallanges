class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long>st;
        for(int i=0;i<nums.size();i++){
            long long x=nums[i];
            while(!st.empty() && st.top()==x){
                x=st.top()+x;
                st.pop();

            }
            st.push(x);
        }
        vector<long long>vec;
        while(!st.empty()){
            vec.push_back(st.top());
            st.pop();
        }
        reverse(vec.begin(),vec.end());
        return vec;
    
    }
};