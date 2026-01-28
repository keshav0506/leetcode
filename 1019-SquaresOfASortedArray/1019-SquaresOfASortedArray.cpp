// Last updated: 28/01/2026, 16:19:09
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> ans;
        for(int i = 0;i< nums.size();i++){
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};