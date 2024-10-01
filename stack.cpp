#include<bits/stdc++.h>
using namespace std;

void exStack(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(3);
    s.emplace(5);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
}

int main(){
    exStack();
    return 0;
}