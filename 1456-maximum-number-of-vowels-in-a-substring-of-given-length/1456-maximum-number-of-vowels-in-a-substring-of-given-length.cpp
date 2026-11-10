class Solution {
public:
bool isVowels(char ch){
    return ch=='a' || ch=='e'|| ch=='i' || ch=='o'|| ch=='u';
}
    int maxVowels(string s, int k) {
        int len=0;
        int coVo=0;
        int i=0;
        int ans=0;
        for(int j=0;j<s.size();j++){
            len++;
            if(isVowels(s[j])){
                coVo++;
            }
            while(len>k){
                if(isVowels(s[i])){
                    coVo--;
                    
                }
                i++;
                len--;
            }
            
            ans=max(ans,coVo);
        }
        return ans;

    }
};