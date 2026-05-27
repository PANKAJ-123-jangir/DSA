#include<iostream>
using namespace std;

inline int checkEven(int n)   // Inline function
{
    return (n % 2 == 0) ? 1 : 0;   // Ternary operator
}

int main()
{
    int x;

    cout<<"Enter a number: ";
    cin>>x;

    int result = checkEven(x);

    cout<<"Is the number even? "<< (result ? "Yes" : "No") <<endl;

    return 0;
}