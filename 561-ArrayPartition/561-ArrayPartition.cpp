// Last updated: 28/01/2026, 16:19:30
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        pair <int,int>p;
        int ans = 0;
        for(int i = 0;i < nums.size();i+=2){
            p=make_pair(nums[i],nums[i+1]);
            ans += min(p.first,p.second);
        }
        return ans;
    }
};