// Last updated: 02/02/2026, 13:26:23
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(auto i:s){
            m1[i]++;
        }
        for(auto i:t){
            m2[i]++;
        }
        return m1==m2;
    }
};