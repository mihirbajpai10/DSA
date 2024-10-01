#include<bits/stdc++.h>
using namespace std;

void exVector() {

/*
    vector<int> m;

    m.push_back(1);
    m.emplace_back(2);
    vector<int>::iterator mb = m.begin();
    // mb++;
    // mb = mb + 2;
    cout << m[0] << " " << m.at(1) << endl;
    cout << *(mb);
*/
    // insert function
    vector<int> m(2,100);
    m.insert(m.begin(), 300); // 300 100 100 insert only 1 value
    m.insert(m.begin() + 1, 2, 10); // 300 10 10 100 100 insert more than 2 value
    cout << m[0] << " " << m[1] << " " << m[2] << " " << m[3] << " " << m[4] << endl;
    cout << m.size() << endl; 
    // m.clear();
    // cout << m.empty() << endl;
    
}

int main() {
    exVector();
}