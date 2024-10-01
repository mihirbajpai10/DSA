// reverse a number.
#include<bits/stdc++.h>
using namespace std;


/*int reverse(int n) {
    while (n>0)
    {
        int rev = n % 10;
        n = n / 10;

        cout << rev;
    }
}

int main() {
    int n;
    cin >> n;
    reverse(n);
}*/

// WAP to generate the reverse of a given no. N
// Print the corresponding reverse no.
// NOTE- if a no. tailing zeros, then its reverse will not include them.
// Example - 10400 -> 401 instead of 00401.

int main() {
    int n;
    cin >> n;
    int revNum = 0;
    while(n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n/10;
    }
    cout << revNum;
}