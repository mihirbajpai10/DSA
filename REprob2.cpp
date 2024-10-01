#include<bits/stdc++.h>
using namespace std;

// Print Linearly from 1 to n like> n= 4 -> 1,2,3,4


// normal way

/*int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)    {
        cout << i << " ";
    }
    
}*/


// by Recursion

void numberRE(int i, int n){
    if(i > n)
    {
        return;
    }
    cout << i << " ";
    numberRE(i +1, n);
}
int main() {
    int n;
    
    cin >> n;
    numberRE(1, n);
}


