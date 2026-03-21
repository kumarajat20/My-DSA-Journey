// HOUR GLASS PATTERN 
#include<bits/stdc++.h>
using namespace std; 
int main() {
    int n = 2; 
    for ( int i = 1; i<=n; i++) {
        for (int star=1; star<=n+1-i; star++) {
            cout<< "*";
        }
        for (int space =1 ; space<= 2*i-2 ; space++) {
            cout << " "; 
        }
        for (int star=1; star<=n+1-i; star++) {
            cout<< "*";
        }
        cout<< endl; 
    }
    for (int i = n-1; i>=1 ; i--) {
        for (int star=1; star<=n+1-i; star++) {
            cout<< "*";
        }
        for (int space =1 ; space<= 2*i-2 ; space++) {
            cout << " "; 
        }
        for (int star=1; star<=n+1-i; star++) {
            cout<< "*";
        }
        cout<< endl; 
    }

    /// Hollow square pattern 
    cout << endl;
    cout<< endl; 
    int m = 5 ; 
    for (int i = 1 ; i<=m; i++) {
        for (int j = 1 ; j<=m; j++) {
            if (i == 1 || i == m || j == 1 || j == m) {
                cout << "*";
            }
            else {
                cout << " ";
            }

        }
        cout << endl;
    }
    return 0 ; 
}