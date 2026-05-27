#include<iostream>
using namespace std;

int x = 10;   // Global variable

void display()
{
    cout << "Value of x inside function: " << x << endl;
}

int main()
{
    cout << "Value of x inside main: " << x << endl;

    x = 20;   // modifying global variable

    display();

    return 0;
}