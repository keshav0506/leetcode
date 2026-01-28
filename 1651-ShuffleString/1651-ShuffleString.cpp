// Last updated: 28/01/2026, 16:19:00
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str(s.length(),0);
        for(int i =0;i<s.length();i++){
            str[indices[i]]=s[i];
    }return str;
    }
};