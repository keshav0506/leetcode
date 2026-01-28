// Last updated: 28/01/2026, 16:19:57
class Solution {
public:
    int mySqrt(int x) {
    long long s = 1;
    long long e = x;
    long long m = s + (e-s)/2;
    long long ans= 0;
    while(s <= e){
        if(m*m > x){
            e = m -1;
        }
        else if(m*m < x){
            s = m + 1;
            ans = m;
        }
        else{
            return m;
        }
        m = s + ( e-s )/2;
    }
    return ans;
    }
};