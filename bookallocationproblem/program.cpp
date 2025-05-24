#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr, int n, int m , int maxAllowedPages){ //0(n)
    int student = 1 , pages = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            student++;
            pages = arr[i];
        }
    }
    return student <=m;
}

int allocateBooks(vector<int> &arr, int n, int m){ //0(logN * n)

    if(m > n){
        return -1;
    }

    int sum = 0;
    for(int i=0;i<n;i++){  // 0(n)
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum;
    while(st<=end){ //0(logN)
        int mid = st + (end - st)/2;
        if(isvalid(arr,n,m ,mid)){ //left
            ans = mid;
            end = mid - 1;
        }else{ //right
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {15,17,20};
    int n = arr.size(), m = 2;

    cout << allocateBooks(arr,n,m) << endl;

    return 0;
}