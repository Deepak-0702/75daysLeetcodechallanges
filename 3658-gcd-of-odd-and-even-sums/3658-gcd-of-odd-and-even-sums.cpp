class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int idx=1;
        int sumOdd=0;
        int sumEven=0;
        for(int i=1;i<=2*n;i++){
            if(idx%2!=0){
                sumOdd+=idx;
                idx++;
            }
            else{
                sumEven+=idx;
                idx++; 
            }
        }
        return gcd(sumOdd,sumEven);
    }
};