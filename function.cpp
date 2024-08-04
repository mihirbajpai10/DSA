#include<bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised
/*
void printName(string name) {
    cout << "Hey " << name;
}
int main()
{
    string name;
    cin >> name;
    printName(name);
    return 0;
}
*/

// take two numbers and print its sum
// int sum(int num1, int num2){
//     int num3 = num1 +num2;
//     return num3;
// }

// int main() 
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int num3 = num1 + num2;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }

/*
int min(int num1, int num2) {
    if(num1 <= num2) return num1;
    else return num2;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = min(num1, num2);
    cout << maximum;
    return 0;
}
*/

// pass by reference

/*
void doSomething(int &num) {    // here & is use to pass the original value of num before that it takes copy of num.
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
*/
void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "value inside function: " << arr[0] << endl;
}
int main() {
    int n = 5;
    int arr[5];
    for(int i = 0; i<=4; i = i + 1) {
        cin >> arr[i];
        cout << arr[i] << " " << endl;
    }
    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}
