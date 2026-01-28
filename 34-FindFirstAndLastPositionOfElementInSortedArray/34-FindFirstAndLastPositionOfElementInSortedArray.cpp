// Last updated: 28/01/2026, 16:20:01
class Solution {
public:

    int firstOcc(vector<int> &nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if(target == nums[mid]){
            ans =  mid;
            end = mid - 1;
        }
        else if(target > nums[mid]){
            start = mid + 1;
        }
        else if(target < nums[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(vector<int> &nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if(target == nums[mid]){
            ans =  mid;
            start = mid + 1;
        }
        else if(target > nums[mid]){
            start = mid + 1;
        }
        else if(target < nums[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    int firstOccurence = firstOcc(nums,target);
    int lastOccurence = lastOcc(nums,target);
    ans.push_back(firstOccurence);
    ans.push_back(lastOccurence);
    return ans;  
    }
};