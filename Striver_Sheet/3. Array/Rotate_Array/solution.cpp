#include<bits/stdc++.h>
using namespace std; 
void leftRotate(vector <int>&arr, int k ) {
    int n = arr.size();
    k = k%n ; 
    reverse(arr.begin() , arr.begin() + k );
    reverse(arr.begin() + k  , arr.end());
    reverse(arr.begin() , arr.end());
    

}
void RightRotate(vector <int>&arr, int k ) {
    int n = arr.size();
    k = k%n ; 
    reverse(arr.begin() , arr.end() );
    reverse(arr.begin()   , arr.begin()+k );
    reverse(arr.begin()+k , arr.end());
    

}
int main() {
    vector <int> arr = {1,2,3,4,5}; 
    return 0 ;
}