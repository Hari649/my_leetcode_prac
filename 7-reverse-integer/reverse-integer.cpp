class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;  
        
        while (x != 0) {
            int digit = x % 10; 
            x /= 10;

            reversed = reversed * 10 + digit;

            if (reversed > INT32_MAX || reversed < INT32_MIN)
                return 0;
        }
        return static_cast<int>(reversed);
    }
};
