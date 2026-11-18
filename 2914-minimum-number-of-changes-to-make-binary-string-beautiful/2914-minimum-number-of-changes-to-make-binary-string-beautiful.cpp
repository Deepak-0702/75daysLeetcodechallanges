class Solution {
public:
    int minChanges(string s) {
        int n=s.size();
        if(n%2!=0) return 0;
        int count=0;
        int i=0;
        while(i<n-1){
            if(s[i]!=s[i+1]){
                count++;
                i+=2;
            }
            else{
                i++;
            }
        }
        return count;
    }
};