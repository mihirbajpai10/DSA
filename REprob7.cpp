#include<bits/stdc++.h>
using namespace std;

// reverse an arry 
// by taking 1 variable.
void reverseArry(int i,int arr[], int n) {
    if(i>=n/2) {
        return;
    }
    else
    {
        swap(arr[i], arr[n-i-1]);
        reverseArry(i+1, arr, n);
    }
         
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArry(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}