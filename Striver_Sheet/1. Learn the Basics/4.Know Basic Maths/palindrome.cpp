#include<bits/stdc++.h>
using namespace std ;

bool palindromeNumber(int n) {
    int revNum = 0;
    int dup = n ;
    while(n > 0) {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    if(dup == revNum) {
        return true ;
    }
    else { return false; } 
}

int main() {
    int num = 12345;
    if( palindromeNumber(num)) {
        cout << "Given Number is Palindrome"; 
    }
    else {
        cout << "NOt a palindrome"; 
    }
    return 0;
}