#include<iostream>
using namespace std ; 
int main() {
    int n = 5 ;
    for(int i = 1 ; i<=n ; i++ ) {
        for(int j = 1; j <= n-i ; j++) {
            cout << " "; 
        }
        for (int star = 1 ; star <= 2*i-1; star++) {
            cout << "*"; 
        }
        cout << endl;
    }
    for(int i = n ; i>=1 ; i-- ) {
        for(int j = 1; j <= n-i ; j++) {
            cout << " "; 
        }
        for (int star = 2*i-1 ; star >= 1; star--) {
            cout << "*"; 
        }
        cout << endl;
    }
    return 0 ;
}