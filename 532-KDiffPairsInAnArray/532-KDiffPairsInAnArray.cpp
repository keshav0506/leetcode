// Last updated: 28/01/2026, 16:19:35
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i = 0;
        int j = 1;
        while(j < nums.size()){
            int d =nums[j]-nums[i] ;
            if(d < k){
                j++;
            }
            else if(d==k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else{
                i++;
            }
            if(i==j){
                j++;
            }
        }
        return ans.size();
    }
};