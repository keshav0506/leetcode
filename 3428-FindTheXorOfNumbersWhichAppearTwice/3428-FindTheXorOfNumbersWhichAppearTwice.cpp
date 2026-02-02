// Last updated: 02/02/2026, 20:55:17
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int ans = 0;
        for(auto i:m){
            if(i.second==2){
                ans = ans^i.first;
            }
        }
        return ans;
    }
};