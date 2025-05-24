#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int> &arr, int N, int C, int minAllowedDistance){ //O(N)
    int cow = 1, lastStallPos = arr[0];
    for(int i=1;i<N;i++){
        if(arr[i] - lastStallPos >= minAllowedDistance){
            cow++;
            lastStallPos = arr[i];
        }
    }
    return cow >=C;
}
int getDistance(vector<int> &arr,int N,int C){

    if(C > N){
        return -1;
    }

    sort(arr.begin(),arr.end()); //NlogN
    int st = 1, end = arr[N - 1] - arr[0],ans = - 1;

    while (st <= end){ //O(log(Range) * N)
        int mid = st + (end - st) / 2;
        if(isPossible(arr,N,C,mid)){ //ans found in right side
            ans = mid;
            st = mid + 1;
        }else{ //ans found in left side
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,8,4,9};
    int N = arr.size();
    int C = 3;
    cout << getDistance(arr,N,C);

    return 0;
}