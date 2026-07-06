class Solution {
public:
void helper(int idx,vector<string>&ans,string &temp,vector<string>&nums){
    if(idx==nums.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back('0');
    helper(idx+1,ans,temp,nums);
    temp.pop_back();

    temp.push_back('1');
    helper(idx+1,ans,temp,nums);
    temp.pop_back();
}
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string>ans;
        string temp="";
        helper(0,ans,temp,nums);
        for(int i=0;i<ans.size();i++){
            string str=ans[i];
            if(find(nums.begin(),nums.end(),str)==nums.end()){
                return str;
            }
        }
        return "";
    }
};