#include<bits/stdc++.h>
using namespace std; 
int main() {
    for(char i = 'E'; i>='A'; i--) {
        for(char ch = 'A'; ch <= i ; ch++) {
            cout << ch; 
        }
        cout << endl; 
    }
    return 0 ;
}