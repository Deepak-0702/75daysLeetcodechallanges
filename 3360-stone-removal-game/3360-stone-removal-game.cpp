class Solution {
public:
    bool canAliceWin(int n) {
        int stone=10;
        while(n>=stone){
            n=n-stone;
            stone--;
            if(n<stone){
                return true;
            }
            n-=stone;
            stone--;
        }
        return false;
    }
};