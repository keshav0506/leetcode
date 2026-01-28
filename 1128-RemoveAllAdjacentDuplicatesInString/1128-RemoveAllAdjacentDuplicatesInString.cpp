// Last updated: 28/01/2026, 16:19:06
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int i = 0;
        while(i < s.length()){
            if(ans.length()>0 && ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};