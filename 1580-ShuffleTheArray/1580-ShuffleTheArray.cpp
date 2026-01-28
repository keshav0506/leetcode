// Last updated: 28/01/2026, 16:19:02
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0;
        int j = nums.size()/2;
        vector <int> ans;
        while(j < nums.size()){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};