// Last updated: 28/01/2026, 16:19:27
class Solution {
public:
int expandAroundIdx(string s,int i,int j){
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        i--;
        j++;
        count++;
    }
    return count;
}
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for(int i = 0;i< n;i++){
            int fromOdd = expandAroundIdx(s,i,i);
            count=count+fromOdd;
            int fromEven = expandAroundIdx(s,i,i+1);
            count=count+fromEven;
        }
        return count;
    }
};