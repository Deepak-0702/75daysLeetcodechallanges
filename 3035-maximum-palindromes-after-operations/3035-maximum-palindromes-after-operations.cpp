class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        vector<int>freq(26,0);
        for(string &word:words){
            for(char ch:word){
                freq[ch-'a']++;
            }
        }
        int pair=0;
        for(int p:freq){
            pair+=p/2;
        }
        vector<int> len;
        for(string &s : words) {
            len.push_back(s.size());
        }

        sort(len.begin(),len.end());

        int ans=0;
        for(int l:len){
            int need=l/2;
            if(pair>=need){
                pair-=need;
                ans++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};