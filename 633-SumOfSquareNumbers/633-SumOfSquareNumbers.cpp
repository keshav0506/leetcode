// Last updated: 28/01/2026, 16:19:28
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = sqrt(c);

        while (a <= b) {
            long long k = a*a + b*b;  

            if (k == c)
                return true;
            else if (k > c)
                b--;
            else
                a++;
        }
        return false;
    }
};