// Last updated: 28/01/2026, 17:29:54
class Solution {
public:
    int longestContinuousSubstring(string s){
        int d = 1;
        int c = 1;
        for(int i = 0;i<s.length()-1;i++){
            if(int(s[i])==int(s[i+1])-1){
                c+=1;
                d=max(c,d);
            }
            else{
                c=1;
            }
        }
        return d;
    }
};