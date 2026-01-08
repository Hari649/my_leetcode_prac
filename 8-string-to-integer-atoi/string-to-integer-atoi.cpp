 class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long long num = 0;

        // Skip leading spaces
        while (i < s.size() && s[i] == ' ')
            i++;

        // Handle sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert digits
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            if (sign * num >= INT_MAX) return INT_MAX;
            if (sign * num <= INT_MIN) return INT_MIN;

            i++;
        }

        return sign * num;
    }
};
