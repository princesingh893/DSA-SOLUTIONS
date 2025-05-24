#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int> &nums){
    int ans = 0;
    for(int val : nums){
        ans ^= val;
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,3,2,1,9};
    cout << singleElement(nums);

    return 0;
}