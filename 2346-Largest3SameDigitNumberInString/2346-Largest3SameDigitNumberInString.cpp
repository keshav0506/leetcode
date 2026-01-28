// Last updated: 28/01/2026, 17:30:02
class Solution {
public:
    string largestGoodInteger(string s) {
        string str="";
        int val=0;
        int n = s.length();
        for(int i = 0;i<n-2;i++){
            if(s[i]==s[i+1] && s[i+1]==s[i+2]){
                if(s[i]=='0'){
                    str = "000";
                }
                else{
                val=max(val,stoi(s.substr(i,3)));
                }
            }
        }
        if(val == 0){
            return str;
        }
        return to_string(val);
    }
};