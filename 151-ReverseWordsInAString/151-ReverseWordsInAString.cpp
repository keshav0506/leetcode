// Last updated: 28/01/2026, 16:19:49
class Solution {
public:
    void insert(string &res, string &s, int start, int end) {
        for(int i = start; i <= end; i++) {
            res.push_back(s[i]);
        }
        res.push_back(' ');
    }

    string reverseWords(string s) {
        string res;
        int n = s.length();
        int end = n - 1;

        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == ' ') {
                if(i + 1 <= end) {
                    insert(res, s, i + 1, end);
                }
                end = i - 1;
            }
        }
        if(end >= 0) {
            insert(res, s, 0, end);
        }
        if(!res.empty()) {
            res.pop_back();
        }
        return res;
    }
};