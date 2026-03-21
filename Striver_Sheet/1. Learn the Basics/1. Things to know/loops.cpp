#include<bits/stdc++.h>
using namespace std ; 
int main() {
    for( int i =0; i<10 ; i++ ) {
        cout << i << endl; 
        cout << endl ; 
    }
    int n = 5 ;
    int factorial = 1 ; 
    while (n>0) {
        factorial *= n;
        n--;
    }
    cout << "Factorial of 5 " << factorial << endl ; 
    return 0 ; 
}