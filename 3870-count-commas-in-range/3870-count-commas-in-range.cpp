class Solution {
public:
    int countCommas(int n) {
        int num=n;
        int digit=0;
        while(num>0){
            digit++;
            num=num/10;
        }
        if(digit>3){
            return n-999;
        }
        return 0;
    }
};