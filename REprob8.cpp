#include<bits/stdc++.h>
using namespace std;

// check if a string is palindrome

bool palindrome(int i, string &s) {
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    else
    {
       return palindrome(i+1, s);
    }
    
    
    
}
int main() {
    string s = "MADAM";
    cout << palindrome(0, s);
    return 0;

}