class Solution {
public:
    void dfs(int idx, int n, int cost, int k,
             string &curr, vector<string>& ans) {

        if(cost > k) return;

        if(idx == n){
            ans.push_back(curr);
            return;
        }

        // place 0
        curr.push_back('0');
        dfs(idx + 1, n, cost, k, curr, ans);
        curr.pop_back();

        // place 1 only if previous wasn't 1
        if(idx == 0 || curr.back() != '1'){
            curr.push_back('1');
            dfs(idx + 1, n, cost + idx, k, curr, ans);
            curr.pop_back();
        }
    }

    vector<string> generateValidStrings(int n, int k) {
        vector<string> ans;
        string curr;

        dfs(0, n, 0, k, curr, ans);

        return ans;
    }
};