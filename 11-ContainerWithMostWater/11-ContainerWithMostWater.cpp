// Last updated: 28/01/2026, 16:20:09
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e = height.size()-1;
        int ans = INT_MIN;
        while(s < e){
            int h1=min(height[s],height[e]);
            int dis = e-s;
            h1 *= dis;
            ans=max(h1,ans);
            if(height[s]<height[e]){
                s++;
            }
            else{
                e--;
            }
            
        }
        return ans;
    }
};