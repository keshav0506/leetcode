// Last updated: 28/01/2026, 16:19:24
class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0;i<s.length();i++){
            if(s[i] >='A' && s[i] <='Z'){
                s[i]=s[i]+'a'-'A';
            }
        }
        return s;
    }
};