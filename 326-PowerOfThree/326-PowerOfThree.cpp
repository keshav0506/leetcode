// Last updated: 28/01/2026, 16:19:41
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        if(n<=0 || n%3 != 0){
            return false;
        }
        return isPowerOfThree(n/3);
        
    }
};