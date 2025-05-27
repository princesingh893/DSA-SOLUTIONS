#include<iostream>
#include<vector>
using namespace std;

void bubbleShort(vector<int> &nums ,int n){ //O(n^2)
    bool isSwap = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            isSwap = false;
            if(nums[j] > nums[j+1]){
                swap(nums[j],nums[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){ //array is already sorted
            return ;
        }
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
    bubbleShort(nums,n);
    print(nums,n);



    return 0;
}