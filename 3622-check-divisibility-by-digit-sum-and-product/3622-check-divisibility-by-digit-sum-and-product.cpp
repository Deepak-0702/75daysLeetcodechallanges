class Solution {
public:
int sumofdigit(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
int profDig(int n){
    int pro=1;
    while(n>0){
        int d=n%10;
        pro*=d;
        n=n/10;
    }
    return pro;
}
    bool checkDivisibility(int n) {
        int total=sumofdigit(n)+profDig(n);
        return (n%total==0);
    }
};