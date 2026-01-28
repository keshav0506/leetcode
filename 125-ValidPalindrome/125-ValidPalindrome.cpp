// Last updated: 28/01/2026, 16:19:52
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i = 0;i<s.length();i++){
            if (isalnum(s[i])) {
                str.push_back(tolower(s[i]));
            }
        }
        for(auto val:str){
            cout << val;
        }
        int i = 0;
        int j = str.length()-1;
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
};