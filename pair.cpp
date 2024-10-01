#include<bits/stdc++.h>
using namespace std;

void exPair() {
    /*For 2 integers or variables*/
    // pair<int, int> p = {1, 3};
    // cout << p.first << " " << p.second;

    /*For 2 or more means multiple variables or integers*/
    // pair<int, pair<int, int>> p = {1, {3, 4}};
    // cout << p.first << " " << p.second.second << " " << p.second.first;

    /*Declaring pair array*/
    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 2}};
    cout << arr[1].second;
}

int main() {
    exPair();
}