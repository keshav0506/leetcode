// Last updated: 28/01/2026, 16:18:52
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            ans.push_back(nums[i]);
            
        }
        for(int i = 0;i < n;i++){
            ans.push_back(nums[i]);
            
        }
        return ans;
    }
};