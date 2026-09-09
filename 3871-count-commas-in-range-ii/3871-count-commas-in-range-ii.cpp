class Solution {
public:
    long long countCommas(long long n) {
        if(n<=3) return 0;
        long long count=0;
        long long i=1000;
        while(i<=n){
            count+=n-i+1;
            i*=1000;
        }
        return count;
    }
};