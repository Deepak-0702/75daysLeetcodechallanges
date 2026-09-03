class Solution {
public:
    string removeStars(string s) {
        
        vector<char>arr;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                arr.pop_back();
            }else{
                arr.push_back(s[i]);
            }
        }
        return string(arr.begin(),arr.end());
    }
};