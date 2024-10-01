#include<bits/stdc++.h>
using namespace std;

void exList() {
    list<int> m;
    m.push_back(2);
    m.emplace_back(3);
    cout << m.front() << " " << m.back() << endl;
    m.push_front(1);
    m.emplace_front(0);
    for(auto mb : m) {
        cout << mb << " " ; 
    }

}

int main() {
    exList();
}
