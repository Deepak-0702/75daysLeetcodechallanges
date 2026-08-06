class Solution {
public:
int prodDig(int n){
    int pro=1;
    while(n>0){
        int d=n%10;
        pro*=d;
        n=n/10;
    }
    return pro;
}
    int smallestNumber(int n, int t) {
        while(prodDig(n) %t!=0){
            n++;
        }
        return n;
    }
};