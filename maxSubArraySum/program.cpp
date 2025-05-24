#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSubArraySum(vector<int> &nums){
    int n = nums.size();

    if(nums.size() == 1){
        return nums[0];
    }

    int currSum = 0, maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += nums[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "maxSubArray sum is = " << maxSubArraySum(nums) << endl;

    return 0;
}