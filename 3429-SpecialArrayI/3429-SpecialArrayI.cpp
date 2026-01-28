// Last updated: 28/01/2026, 16:18:44
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++) {
            if((nums[i] & 1) == (nums[i + 1] & 1)) {
                return false;
            }
        }
        return true;
    }
};