// Last updated: 28/01/2026, 16:18:58
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector <int> arr;
        arr.push_back(first);
        for(int i = 0;i<encoded.size();i++){
            int next = encoded[i]^arr[i];
            arr.push_back(next);
        }
        return arr;
    }
};