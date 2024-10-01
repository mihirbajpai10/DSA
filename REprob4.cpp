#include<bits/stdc++.h>
using namespace std;

// print 1 to N by backtrack

void numberBT(int i, int n) {
    if (i < 1) {
        return ;
    }
    numberBT(i-1, n);
    cout << i << " ";
}
int main() {
    int n;
    cin >> n;
    numberBT(n, n);
}

