class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        if(n1>n2) return false;
        vector<int>freq1(26,0),freq2(26,0);
        for(char ch:s1){
            freq1[ch-'a']++;
        }
        int i=0;
        for(int j=0;j<n2;j++){
            freq2[s2[j]-'a']++;
            if(j-i+1 > n1){
                freq2[s2[i]-'a']--;
                i++;
            }
            if(freq1==freq2) return true;
        }
        return false;
    }
};