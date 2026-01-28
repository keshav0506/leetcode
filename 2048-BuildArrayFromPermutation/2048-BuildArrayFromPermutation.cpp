// Last updated: 28/01/2026, 16:18:54
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> ans;
        for(int i = 0; i < nums.size();i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};