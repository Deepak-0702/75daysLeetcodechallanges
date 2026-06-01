class Solution {
public:
    int digitFrequencyScore(int n) {
        string str=to_string(n);
        unordered_map<char,int>freq;
        for(char c:str){
            freq[c]++;
        }
        int sum=0;
        for(auto p:freq){
            int a=p.first-'0';
            int b=p.second;
            sum+=a*b;
        }
        return sum;
    }
};