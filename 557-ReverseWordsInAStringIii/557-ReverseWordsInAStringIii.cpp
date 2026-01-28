// Last updated: 28/01/2026, 16:19:32
class Solution {
public:
void reverse(string &s,int start,int end){
    int i = start;
    int j = end;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

}
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        for(int i = 0;i<=s.length();i++){
            if(s[i]==' ' || i==s.length()){
                end = i-1;
                reverse(s,start,end);
                start=i+1;
            }
        }
        return s;
    }
};