class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=s.length();
        int len;
        int maxi=0;
        for(int i=0;i<l;i++){
            int hash[256]={0};
            for(int j=i;j<l;j++){
                if(hash[s[j]]==1) break;
                len=j-i+1;
                maxi=max(maxi,len);
                hash[s[j]]=1;
            }
        }
        return maxi;
    }
};