// Last updated: 28/01/2026, 16:18:56
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while(pos!=string::npos){
            s.erase(pos,part.length());
            pos = s.find(part);
        }
        return s;
    }
};