// Last updated: 28/01/2026, 16:19:08
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& x) {
        return (x[1][0] - x[0][0]) * (x[2][1] - x[0][1]) !=
               (x[2][0] - x[0][0]) * (x[1][1] - x[0][1]);
    }
};