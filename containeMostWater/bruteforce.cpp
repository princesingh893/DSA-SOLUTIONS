#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int> &height){
    int maxWater = 0;
    int size = height.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           int width = j-i;
           int minHeight = min(height[i],height[j]);
           int currWater = width * minHeight;
           maxWater = max(maxWater,currWater);
        }
    }
    return maxWater;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int result = maxArea(height);
    cout<<"Maxarea is contain with water is = "<<result;
    
   


    return 0;
}