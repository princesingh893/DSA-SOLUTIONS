#include<iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int> &nums,int n){
    for(int i=1; i<n; i++){
        int curr = nums[i];
        int prev = i - 1;

        while(prev >=0 && nums[prev] > curr){
            nums[prev + 1] = nums[prev];
            prev--;
        }
        nums[prev + 1] = curr; //placing the curr element in its correct positon
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
    insertionSort(nums,n);
    print(nums,n);



    return 0;
}