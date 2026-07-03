class Solution {
public:
    int maxProduct(int n) {
        //agr hum nested loop ko hata chahte hai tho 
        //as we know we the product of largest and second largest element 
        int first=0;
        int second=0;
        while(n>0){
            int d=n%10;
            if(d>=first){
                second=first;
                first=d;
            }
            else if(d>second){
                second=d;
            }
            n/=10;
        }
        return first*second;
    }
};