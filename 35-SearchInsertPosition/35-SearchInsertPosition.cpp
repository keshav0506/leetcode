// Last updated: 28/01/2026, 16:20:00
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = 0;
        int s = 0;
        int e = nums.size()-1;
        int m = s+(e-s)/2;
        while(s<=e){
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                ans = m;
                e=m-1;
            }
            else{
                s=m+1;
            }
            m = s+(e-s)/2;
        }
        if(ans == 0){
            ans = e+1;
        }
        return ans;
    }
};