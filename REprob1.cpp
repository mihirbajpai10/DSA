#include<bits/stdc++.h>
using namespace std;

// Print name N times


// normal way
/* int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)    {
        
        cout << "Mihir" << endl;
    }
    
}*/


// by Recursion

void nameRE(int i, int n){
    if (i > n)
    {
        return;
    }
    cout << "Mihir" << endl;
    nameRE(i + 1, n);

}
int main() {
    int n;
    int i = 1;
    cin >> n;
    nameRE(i, n);
}