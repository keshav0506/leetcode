// Last updated: 28/01/2026, 16:19:18
class Solution {
public:
bool isMonotonic(vector<int>& nums){
    bool inc = true;
    bool dec = true;
    for(int i = 0;i< nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            inc=false;
        }
        if(nums[i]<nums[i+1]){
            dec=false;
        }
        if(!inc && !dec){
            return false;
        }
    }
    return inc || dec;
    }
};