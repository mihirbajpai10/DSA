#include<bits/stdc++.h>
using namespace std;

void printDivisor(int n) {
    // this is the first way and it's TC is O(n)
   /* for (int i = 1; i <= n; i++)
    {
       if ( n%i == 0)
       {
        cout << i << " ";
       }
       
    }*/

   // this is the second way and it's TC is O(sqrt(n))
   // and it will use container which is vector.    
      vector<int> div;
      for(int i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            div.push_back(i);
            if ( (n/i) != i) 
            {
                div.push_back(n/i);
            }
        }
      }    
      sort(div.begin(), div.end());
      for(auto it : div)
      cout << it << " ";

}

int main() {
    int n;
    cin >> n;
    printDivisor(n);
}