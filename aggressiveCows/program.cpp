#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,2,8,4,9};
    int N = arr.size();
    int C = 3;
    cout << getDistance(arr,N,C) << endl;

    return 0;
}