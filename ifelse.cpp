#include<bits/stdc++.h>
using namespace std;        
/*  Write a program that takes an input of age and prints if you are adult or not.  
int main()
{
    int age;
    cin >> age; 
    if(age >=18)
    {
        cout << "You are an adult";
    }
    else
    {
        cout << "You are not an adult";
    }
    return 0;
    
}*/

/* 
a school has following rules for grading system:    
a. Below 25 - F 
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Write a program that takes an input of marks and prints the corresponding grade. 

int main (){
    int marks;
    cin >> marks;
    if (marks < 25)
    {
        cout << "F";
    
    }
    else if (marks <= 45)
    {
        cout << "E";
    }
    else if (marks <= 50)
    {
        cout << "D";
    }
    else if (marks <= 60)
    {
        cout << "C";
    }
    else if (marks <= 80)
    {
        cout << "B";
    }
    else if (marks >= 80)
    {
        cout << "A";
    }
}
*/

/* Take the age from the user and then decide accordingly
1. If age < 18,
 print  nat eligible to job
2. If age >= 18,
    print eligible to job
3. If age >= 55 and age <= 57,
    print elgible for job, but retirement soon.
4. If age > 57,
    print retirement age reached.

int main (){
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Not Eligible to job";
    }
    else if(age <=57)
    {
        cout << "Eligible to job";
        if (age >= 55)
        {
            cout << ", but retirement soon";
        }
         
    }
    else if (age > 57)
    {
        cout << "Retirement age reached";
    }
}
*/