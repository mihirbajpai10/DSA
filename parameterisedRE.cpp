#include<bits/stdc++.h>
using namespace std;

// int sum = 0;
void paraRecur(int n, int sum) {
    if (n < 1)
    {
        cout << sum ;
        return;
    }
    else
    {
        paraRecur(n-1, sum+n);
    }
    

}

int main () {
    int n;
    cin >> n;
    paraRecur(n,0);
}

