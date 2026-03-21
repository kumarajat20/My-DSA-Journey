#include<iostream>
using namespace std ; 
int main() {
    for(char i = 'E' ; i>= 'A'; i--) {
        for(char ch =i; ch<= 'E' ; ch++ ) {
            cout << ch << " "; 
        }
        cout << endl; 
    }
    return 0 ;
}