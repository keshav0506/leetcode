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