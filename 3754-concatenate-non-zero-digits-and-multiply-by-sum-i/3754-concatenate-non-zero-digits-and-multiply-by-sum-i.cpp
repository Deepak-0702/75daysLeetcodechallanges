class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return n;
        long long sum=0;
        string str="";
        while(n>0){
            int d=n%10;
            if(d!=0){
                str=str+to_string(d);
            }
            sum+=d;
            n=n/10;
        }
        reverse(str.begin(),str.end());
        long long num=stoll(str);
        return num*sum;
    }
};