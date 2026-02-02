// Last updated: 02/02/2026, 20:55:28
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int i = 0;
        int j = 0;
        int n1 = word1.length();
        int n2 = word2.length();
        while(i < n1 && j < n2){
            str.push_back(word1[i]);
            str.push_back(word2[j]);
            i++;j++;
        }
        while(i<n1){
            str.push_back(word1[i]);
            i++;
        }
        while(j<n2){
            str.push_back(word2[j]);
            j++;
        }
        return str;
    }
};