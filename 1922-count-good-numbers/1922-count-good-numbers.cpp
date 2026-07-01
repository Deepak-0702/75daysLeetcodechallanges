class Solution {
public:
long long MOD=1e9+7;
long long pow(long long a,long long b){
    long long ans=1;
    while(b>0){
        if(b%2==1){
            ans=(ans*a)%MOD;
        }
        //sq the number
        a=(a*a)%MOD;
        //half exponent
        b=b/2;
    }
    return ans;
}
    int countGoodNumbers(long long n) {
        //Even index (0,2,4...) par digit hona chahiye even digit → choices = 5
        //{0,2,4,6,8}
        //Odd index (1,3,5...) par digit hona chahiye prime digit → choices = 4
        //{2,3,5,7}
        long long ans=1;
        long long even=(n+1)/2;
        long long odd=n/2;
        long long a1=pow(5,even);
        long long a2=pow(4,odd);
        ans=(a1*a2)%MOD;
        return ans;
    }
};