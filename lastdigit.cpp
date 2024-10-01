#include<bits/stdc++.h>
using namespace std;

int extract(int n) {
    while (n>0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        
        cout << lastdigit << endl;
        
    }
    
     
    
    
}

int main() {
    int n;
    cin >> n;
    extract(n);
}
