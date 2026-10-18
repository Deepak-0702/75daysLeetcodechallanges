class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int r=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='U'){
                r--;
            }
            else if(moves[i]=='D'){
                r++;
            }else if(moves[i]=='L'){
                c--;
            }else if(moves[i]=='R'){
                c++;
            }
        }
        return r==0 && c==0 ? true :false;
    }
};