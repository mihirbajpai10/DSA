#include<bits/stdc++.h>
using namespace std;

// print in terms of n to 1. like -> n=4 -> 4,3,2,1

// normal way
/*int main() {
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        cout << i << " ";
    }
    
}*/

// by recursion

void numberRE(int i , int n){
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    numberRE(i-1,n);
}
int main() {
    int n; 
    cin >> n;
    numberRE(n,n);
}


