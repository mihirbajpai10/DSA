#include<bits/stdc++.h>
using namespace std;

// print n to 1 by backtrack

void numberBT(int i, int n) {
    if (i > n)
    {
        return;
    }
    numberBT(i+1, n);
    cout << i << " ";
}
int main() {
    int n;
    cin >> n;
    numberBT(1, n);
}

