// Last updated: 02/02/2026, 20:55:34
class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        for(auto i:s){
            m[i]++;
        }
        for(auto i:t){
            m[i]--;
        }
        for(auto i : m){
        cout << i.first <<  i.second << endl;
        }
        int ans = 0;
        for(auto i:m){
            if(i.second < 0){
                ans += abs(i.second);
            }
        }
        return ans;
    }
};