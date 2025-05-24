#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPossible(vector<int> &arr, int N, int M , int minTimeAllowed){ //O(N)
    int painter = 1, time = 0;
    for(int i=0;i<N;i++){
        if(time + arr[i] <= minTimeAllowed){
            time += arr[i];
        }else{
            painter++;
            time = arr[i];
        }
    }
    return painter <= M;
}
int minTimeToPaint(vector<int> &arr,int N,int M){ //O(log(sum) * N)
    int sum = 0 , maxVal = INT_MIN;
    for(int i=0;i<N;i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal, end = sum , ans = -1;
    while(st <= end ){
        int mid = st + (end - st) / 2;
        if(isPossible(arr,N,M,mid)){ //ans found in left side
            ans = mid;
            end = mid - 1;
        }else{//ans found in right side
            st = mid + 1;
        }
    }   
    return ans;
}
int main(){
    vector<int> arr = {40,30,10,20};
    int N = arr.size(),M = 2;
    cout << minTimeToPaint(arr,N,M);

    return 0;
}