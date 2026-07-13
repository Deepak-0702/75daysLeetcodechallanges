class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int minLen=to_string(low).size();
        int maxLen=to_string(high).size();
        string str="123456789";
        //substring me substr(startidx,length);
        vector<int>ans;
        for(int j=minLen;j<=maxLen;j++){
            for(int i=0;i+j<=str.size();i++){
                string sub=str.substr(i,j);//j hai na vo length denote karta hai c++ me
                int num=stoi(sub);
                if(num>=low && num<=high){
                    ans.push_back(num);
                }

            }
        }
        return ans;
    }
};