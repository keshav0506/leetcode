// Last updated: 28/01/2026, 16:19:21
class Solution {
public:
int peakIndex(vector<int>& arr ){
     int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
 while (s <= e){
            if(arr[mid] > arr[mid+1] && arr[mid]> arr[mid-1]){
                return mid;
            }
            else if(arr[mid] < arr[mid +1]  ){
                s = mid + 1;
            }
            else{
                e = mid-1;
            }
            mid =s + (e-s)/2;
        }
        return -1;
}

    int peakIndexInMountainArray(vector<int>& arr) {
        int index = peakIndex(arr);
        return index;
       
    }
};