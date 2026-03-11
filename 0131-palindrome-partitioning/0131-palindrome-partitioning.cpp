class Solution {
public:
bool ispalindrome(string s){
    string s2=s;
    int i=0;
    int j=s2.length()-1;
    while(i<j){
        if(s2[i]!=s2[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void helper(string s,vector<vector<string>>&ans,vector<string>&partitions){
    if(s.length()==0){
        ans.push_back(partitions);
        return;
    }
    for(int i=0;i<s.length();i++){
        string part=s.substr(0,i+1);
        if(ispalindrome(part)){
            partitions.push_back(part);
            helper(s.substr(i+1),ans,partitions);
            partitions.pop_back();
        }
    }
}

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>partitions;
        helper(s,ans,partitions);
        return ans;
        

    }
};