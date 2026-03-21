#include<bits/stdc++.h>
using namespace std ; 
int main() {
    int n = 5 ; 
    for( int i = 1 ; i<=n ; i++) {
        for (int j = 1 ; j<=i ; j++ ) {
            cout << j;
        }
        for (int space = 1; space <= 2*(n-i) ; space++) {
            cout << " "; 
        }
        for (int num = i ; num>=1; num--) {
            cout << num ; 
        }
        cout << endl;
    }
    return 0 ; 
}