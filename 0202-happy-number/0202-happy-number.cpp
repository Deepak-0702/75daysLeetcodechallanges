class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1 && st.find(n)==st.end()){
            st.insert(n);
            int sum=0;
            while(n>0){
                int d=n%10;
                sum+=d*d;
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    }
};