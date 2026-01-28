// Last updated: 28/01/2026, 16:19:15
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            if(nums[i]%2==0){
                i++;
            }
            else if(nums[j]%2!=0){
                j--;
            }
            else if(nums[i]%2!=0){
                swap(nums[i],nums[j]);
            }
            else if(nums[j]%2!=0){
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};