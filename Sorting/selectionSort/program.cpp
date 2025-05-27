#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void selectionSort(vector<int> &nums,int n){ //O(n^2)
    for(int i=0;i<n-1;i++){
        int smallestIdx = i;
        for(int j=i+1;j<n;j++){
            if(nums[j] < nums[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(nums[smallestIdx], nums[i]);
    }
}
void print(vector<int> &nums, int n){
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> nums = {2,4,5,6,3,1};
    int n = nums.size();
    selectionSort(nums,n);
    print(nums,n);



    return 0;
}