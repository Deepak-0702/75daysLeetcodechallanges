class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        int tar=0;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                if(tar==0){
                    tar=freq[i];
                }else if(freq[i]!=tar){
                    return false;
                }
            }
        }
        return true;
    }
};