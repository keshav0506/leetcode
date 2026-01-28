// Last updated: 28/01/2026, 16:19:38
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }

    }
};