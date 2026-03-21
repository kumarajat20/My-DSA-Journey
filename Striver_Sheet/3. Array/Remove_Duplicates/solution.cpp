#include<bits/stdc++.h>
using namespace std;
int main() { 
    int arr[8] = {1,1,1 ,2 ,2 ,3 ,3,3};
    int i =0;
    for(int j=1;j<8;j++) {
        if(arr[i] != arr[j]) {
            // arr[i+1] = arr[j];
            i++;
            arr[i]= arr[j];
        }
        
    }
    for(int i = 0 ; i<3; i++) {
        cout << arr[i] << " "; 
    }
    return 0 ;
}