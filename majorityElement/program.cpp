#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> &nums){
    int freq = 0;
    int ans = 0;
    for(int val:nums){
        if(freq == 0){
            ans = val;
            freq = 1;
        }
        if(val == ans){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int countFreq(vector<int> &nums ,int target){
    int freq = 0;
    for(int val:nums){
        if(val == target){
            freq++;
        }
    }
    return freq;
}

int main() {
    vector<int> nums = {2,4,4,4,4,4,4,4};
    int result = majorityElement(nums);
    int freq = countFreq(nums,result);
    cout<<result<<" is the majority element and freqency is "<<freq<<endl;;





    return 0;
}