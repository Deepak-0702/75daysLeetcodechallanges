class Solution {
public:

    bool isSubsequence(string word,unordered_map<char, vector<int>>& mp) {
        int prev = -1;
        for(char ch : word) {
            if(mp.find(ch) == mp.end()){
                return false;
            }
            auto &v = mp[ch];
            auto it = upper_bound(v.begin(), v.end(), prev);
            if(it == v.end()){
                return false;
            }
            prev = *it;
        }

        return true;
    }

    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char, vector<int>> mp;
        // Build map only once
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]].push_back(i);
        }
        int count = 0;
        for(string &word : words) {
            if(isSubsequence(word, mp)) {
                count++;
            }
        }

        return count;
    }
};