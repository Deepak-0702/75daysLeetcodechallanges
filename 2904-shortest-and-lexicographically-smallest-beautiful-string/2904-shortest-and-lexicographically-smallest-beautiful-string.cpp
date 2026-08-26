class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int j=0;
        int count=0;
        string ans="";
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
                
            }
            while(count==k){
                int len=i-j+1;
                if(len<mini){
                    mini=len;
                    ans=s.substr(j,len);
                }
                else if(len==mini){
                    string curr=s.substr(j,len);
                    if(curr<ans){
                        ans=curr;
                    }
                }
                if(s[j]=='1'){
                    count--;
                }
                j++;
            }
        }
        return ans;
        
    }
};