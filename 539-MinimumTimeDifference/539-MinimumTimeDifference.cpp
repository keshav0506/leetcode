// Last updated: 28/01/2026, 16:19:34
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> arr;
        for(int i = 0;i<timePoints.size();i++){
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            arr.push_back(hours*60+min);
        }
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int ans = INT_MAX;
        for(int i=1;i<n;i++){
            ans=min(ans,arr[i]-arr[i-1]);
        } 
        int lastAns= (arr[0]+1440)-arr[n-1];
        ans=min(ans,lastAns);
        return ans;
    }
};