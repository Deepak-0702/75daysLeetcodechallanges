class Solution {
public:
bool isvowels(char ch){
    return ch=='a' ||ch=='e' || ch=='i'|| ch=='o'|| ch=='u';
}
    long long countVowels(string word) {
        long long count=0;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(isvowels(word[i])){
                count+=1LL*(i+1)*(n-i);
            }
        }
        return count;
    }
};