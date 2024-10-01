#include<bits/stdc++.h>
using namespace std;
// NUmber Hashing by using arrays
int main() {
    int n;
    cin >> n; //size of an arr
    int arr[n]; // arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    
    int q;
    cin >> q; // how many query
    while (q--)
    {
        int number; // queries
        cin >> number;

        // fetch
        cout << hash[number] << endl;
    }
    

    return 0 ;
}