#include <bits/stdc++.h>
using namespace std;

// sum of first N number.

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}




