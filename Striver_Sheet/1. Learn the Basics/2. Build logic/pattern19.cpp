#include<iostream>
using namespace std; 
int main() {
    int n = 5 ;
    for(int i = 1; i <=n ; i++ ) { 
       for(int star = 1 ; star<=n-i+1 ; star++) {
            cout <<  "*";
        
       }
       for(int space = 1 ; space <= 2*i -2 ; space++ ) {
            cout << " " ; 
       }
       for( int star = 1; star<=n-i+1; star++) {
            cout << "*"; 
       }
       cout << endl;
     }
     for (int i = n-1 ; i>= 1; i--) {
          for(int star = 1 ; star<=n-i+1 ; star++) {
            cout <<  "*";
        
       }
       for(int space = 1 ; space <= 2*i -2 ; space++ ) {
            cout << " " ; 
       }
       for( int star = 1; star<=n-i+1; star++) {
            cout << "*"; 
       }
       cout << endl;
     }
    return  0 ;
}