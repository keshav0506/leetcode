// Last updated: 28/01/2026, 16:19:14
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3){
            return false;
        }
        bool up = false;
        bool down = false;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1])
                return false;

            if (arr[i] > arr[i - 1]) {
                if (down) return false;
                up = true;
            } else {
                if (!up) return false; 
                down = true;
            }
        }

        return up && down;
    }
};