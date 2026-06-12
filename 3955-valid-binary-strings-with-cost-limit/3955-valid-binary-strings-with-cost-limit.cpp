class Solution {
public:
  
    void helper(string &temp,int n,int i,int cost ,int k,vector<string>&ans){
        if(cost>k) return;
        if(i==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back('0');
        helper(temp,n,i+1,cost,k,ans);
        temp.pop_back();
        if(i==0 || temp.back()!='1'){
            temp.push_back('1');
            helper(temp,n,i+1,cost+i,k,ans);
            temp.pop_back();
        }
        
    }
    vector<string> generateValidStrings(int n, int k) {
        string temp;
        vector<string>ans;
        helper(temp,n,0,0,k,ans);
        return ans;
    }
};