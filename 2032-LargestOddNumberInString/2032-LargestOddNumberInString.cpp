// Last updated: 28/01/2026, 16:18:55
class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int index = -1;
        for(int i=n-1;i>=0;i--){
            int val = num[i]-'0';
            if(val & 1){
                index = i;
                break; 
            }
        }
        if (index == -1) return "";
        string str;
        for(int j = 0;j<= index;j++){
            str.push_back(num[j]);
        }
        return str;
    }
};