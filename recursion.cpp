#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void recursion() {
    if (cnt == 3)
    {
        return;
    }
    cout << cnt << endl;
    cnt++;
    recursion();

}

int main () {
    recursion();
}