#include<bits/stdc++.h>
using namespace std ;
vector <int> RightRotate(vector <int>&arr , int n ) {
    int temp = arr[n-1];
    for(int i = n-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    return arr; 
}
int main () {
   vector<int> arr = {1,2,3,4,5};
    RightRotate(arr, arr.size());
    for(int j= 0 ; j<arr.size(); j++) {
        cout << arr[j] << " "; 
    }
    return 0 ;
}