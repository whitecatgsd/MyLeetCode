class Solution {
public:
    int titleToNumber(string s) {
        int n = 0;
        for (int i = 0; i < s.length(); i++) {
            n = n * 26 + s[i] - 64;
        }
        return n;
    }
};