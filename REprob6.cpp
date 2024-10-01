#include <bits/stdc++.h>
using namespace std;

// reverse an arry
// by taking two variables
void reverseArry(int l, int arr[], int r)
{
    if (l >= r)
    {
        return;
    }
    else
    {

        swap(arr[l], arr[r]);
        reverseArry(l + 1, arr, r - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArry(0, arr, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}