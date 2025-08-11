class Solution {
public:
    string longestPalindrome(string s) {
        int st = 0, len = 0, n = s.size();
        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > len) st = l, len = r - l + 1;
                l--; r++;
            }
        };
        for (int i = 0; i < n; i++) expand(i, i), expand(i, i + 1);
        return s.substr(st, len);
    }
};
