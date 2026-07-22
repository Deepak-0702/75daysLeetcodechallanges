class Solution {
public:
    bool isvowels(char ch) {
        return (ch == 'A' || ch == 'a' ||
                ch == 'E' || ch == 'e' ||
                ch == 'I' || ch == 'i' ||
                ch == 'O' || ch == 'o' ||
                ch == 'U' || ch == 'u');
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (isvowels(s[i]) && isvowels(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (!isvowels(s[i])) {
                i++;
            }
            else {
                j--;
            }
        }

        return s;
    }
};