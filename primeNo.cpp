#include <bits/stdc++.h>
using namespace std;

int main()
{
    // this is a brute force method or a simple method and TC is O(n)
    /* int n;
     cin >> n;
     int cnt = 0;
     for (int i = 1; i <= n; i++)
     {
         if (n%i == 0)
         cnt++;
     }
     if (cnt == 2)
     {
         cout << "It is a Prime number";
     }
     else
     {
         cout << "It is not a Prime Number";
     }*/

    // this is an another method similar to divisor and it TC is O(sqrt(n))
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n/i) != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
    {
        cout << "It is a Prime number";
    }
    else
    {
        cout << "It is not a Prime Number";
    }
}