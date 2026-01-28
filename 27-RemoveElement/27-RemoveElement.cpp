// Last updated: 28/01/2026, 16:20:04
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1){

            }
            if(nums[i] == val){
                continue;
            }
            else{
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};