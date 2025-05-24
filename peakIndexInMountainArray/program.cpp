#include<iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(const vector<int> &arr){
    int l = 0;
    int r = arr.size() - 1;
    // Narrow down until l == r, which will be the peak index
    while (l < r){
        int m = l + (r - l) / 2;
        // If mid is on the descending slope, move left boundary
        if (arr[m] >= arr[m + 1])
            r = m;
        else
            // Otherwise, mid is on the ascending slope
            l = m + 1;
    }
    return l;
}
int main(){
    vector<int> arr = {2,5,8,6,3,0};
    int result = peakIndexInMountainArray(arr);
   
    cout<< result << endl;


    return 0;
}
