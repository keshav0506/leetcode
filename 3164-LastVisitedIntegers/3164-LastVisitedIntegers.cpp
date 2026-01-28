// Last updated: 28/01/2026, 16:18:42
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector <int> ans;
        vector <int> seen;
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                k=0;
                seen.insert(seen.begin(),nums[i]);
                }
            if(nums[i] == -1){
                k+=1;
                if(k>seen.size()){
                    ans.push_back(-1);
                }
                else{
                ans.push_back(seen[k-1]);
                }
            }
            }
            return ans;
        }
};