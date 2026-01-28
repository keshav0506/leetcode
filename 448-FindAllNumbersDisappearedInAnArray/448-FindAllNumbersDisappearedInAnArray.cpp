// Last updated: 28/01/2026, 16:19:36
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> ans;
        for(int i = 0; i < nums.size();i++){
            int k = abs(nums[i])-1;
            if(nums[k]>0){
                nums[k]*=-1;
            }
        }
        for(int i = 0; i < nums.size();i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};