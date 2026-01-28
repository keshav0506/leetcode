// Last updated: 28/01/2026, 16:19:50
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i = 0; i< nums.size();i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};