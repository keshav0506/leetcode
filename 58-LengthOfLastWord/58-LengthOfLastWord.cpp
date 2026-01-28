// Last updated: 28/01/2026, 16:19:58
class Solution {
public:
    int lengthOfLastWord(string s) {
    stringstream t(s);
    string w;
    vector<string> ws;

    while (t >> w) {
        ws.push_back(w);
    }
         return   ws[ws.size()-1].size();
        
        
    }
};