class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>freq;
        int i=0;
        int maxi=0;
        for(int j=0;j<s.size();j++){
            freq[s[j]]++;
            while(freq[s[j]]>2){
                freq[s[i]]--;
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};