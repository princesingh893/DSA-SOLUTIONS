#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int> &height){

    if(height.size() < 2){
        return -1;
    }

    int maxWater = 0;
    int st = 0;
    int end = height.size()-1;
    while(st<end){
        int width =end-st;
        int minHeight = min(height[st],height[end]);
        int currWater = width * minHeight;
        maxWater = max(maxWater,currWater);
        height[st]<height[end]?st++:end--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,2,3,4,5};
    int result = maxArea(height);
    cout<<"Maxarea is contain with water is = "<<result;


    return 0;
}