// Last updated: 28/01/2026, 16:19:04
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = (nums[n-1]-1)*(nums[n-2]-1);
        return ans;
    }
};