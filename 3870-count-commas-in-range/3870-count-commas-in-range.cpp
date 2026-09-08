class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int ans=0;
        for(int i=1000;i<=n;i++){
            int count=0;
            int num=i;
            while(num>0){
                num=num/10;
                count++;
                if(count==3){
                    ans++;
                }
            }
        }
        return ans;
    }
};