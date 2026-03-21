#include<bits/stdc++.h>
using namespace std; 
int main() {
    int n = 5 ; 
    for (int i = 1; i<=5; i++ ) {
        for (int star = 1 ; star <=i; star++) {
            cout << "*"; 
        }
        for(int space = 1; space <= 2*n-2*i; space++) {
            cout<< " " ; 
        }
        for ( int star = 1 ; star <=i; star++) {
            cout << "*"; 
        }
        cout<< endl; 
    }
    for(int i =n-1 ; i>=1; i--) {
        for (int star = 1 ; star <=i; star++) {
            cout << "*"; 
        }
        for(int space = 1; space <= 2*n-2*i; space++) {
            cout<< " " ; 
        }
        for ( int star = 1 ; star <=i; star++) {
            cout << "*"; 
        }
        cout<< endl; 
    }
    return 0 ;
}