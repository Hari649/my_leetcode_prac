class Solution {
public: 
    bool divides(const string& s, const string& t) {
        int n = s.size(), m = t.size();
        if (n % m != 0) return false;   
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i % m]) return false;
        }
        return true;
    }

    string gcdOfStrings(string str1, string str2) { 
        int n = str1.size(), m = str2.size();
        int gcd_len = gcd(n, m);
        string candidate = str1.substr(0, gcd_len);
        if (divides(str1, candidate) && divides(str2, candidate))
            return candidate;
        return "";
    }
};
