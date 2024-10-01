#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // pre compute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int min_element = INT_MIN;
    int max_element = INT_MAX;

    // iterator
    for (auto it : mpp)
    {
        min_element = min(min_element,it.second);
        max_element = max(max_element,it.second);
    }

    // fetch

    cout << min_element << " " << max_element;
    

    
}