// Last updated: 28/01/2026, 16:19:39
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        if(n<=0 || n%4 != 0){
            return false;
        }
        return isPowerOfFour(n/4);
    }
};