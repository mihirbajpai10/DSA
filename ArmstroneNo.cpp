// Armstrong number for 3 digit
#include<bits/stdc++.h>
using namespace std;

int armstrongNo(int n) {
    int dup = n;
    int sum = 0;
    while (n>0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld );
        n = n / 10; 
        
    }
    if (sum == dup)
    {
        cout << "The number is an Armstrone number";   
    }
    else
    {
        cout << "The number is not an Armstrone number";
    }
    
     
}

int main() {
    int n;
    cin >> n;
    armstrongNo(n);
}
