/* jab ham koi badi problem solve karte hai
aur wo problem same type ke chhoti problem ke solution pe 
to us type ki problem solve karne ke k=liye hum recurssion use karte hai
foe example 2^4=2 X 2^3
here 2^4 depends on 2^3 and they are of same type
f(n)=2 X f(n-1) this is the recurrance relation of above problem
recurssion me hume pata hona chaiye rukna kaha hai

if we are using the void function then to stop execution we will write only return;
for example--
#include<iostream>
using namespace std;

void countDown(int n)
{
    if(n == 0)   // base case
        return;

    cout << n << " ";
    countDown(n-1);   // recursive call
}

int main()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    countDown(num);

    return 0;
}
*/
#include<iostream>
using namespace std;
int fact(int n){
    return (n==1 || n==0) ? 1: n*fact(n-1); // use of ternary operator(like if statement)
}

int main()
{
    int n=5;
    cout<<fact(n);
    return 0;
}