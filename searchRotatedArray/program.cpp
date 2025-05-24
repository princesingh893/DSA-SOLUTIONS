#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &nums, int target){
    int st = 0, end = nums.size()-1;
    
    while(st<=end){
        int mid = st + (end - st)/2;
        if(target == nums[mid]){
            return mid;
        }
        // decide search left or right
        if(nums[st] <= nums[mid]){ //left sorted
            if(nums[st]<=target && target<nums[mid]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{ //right sorted
            if(nums[mid] < target && target<=nums[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {3,4,5,6,0,1,2};
    int target = 2;

    int result = search(nums,target);
    cout << "Your target found at idx = " << result << endl;

    return 0;
}