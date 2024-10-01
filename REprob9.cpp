#include<bits/stdc++.h>
using namespace std;

// print fibonacci no. by multiple recursion method

int fibNo(int n) {
    if (n <= 1)
    {
        return n;
    }
    int last = fibNo(n-1);
    int Seclast = fibNo(n-2);
    return last + Seclast;
    
}
int main() {
    int n;
    cin >> n;
    cout << fibNo(n);
}