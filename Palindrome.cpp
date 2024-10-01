// WAP to determine if given number is palindrome or not.
// Print true if it is palindrome, false otherwise.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int revNum = 0;
    int dup = n;
    while(n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n/10;
    }
    if (revNum == dup)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    
    
}