#include<iostream>
using namespace std;
//#switch statement only takes integer and character values
//# continue statement in switch statement is invalide 
//# if break is written in the case and condition meets only this case will executes
//to execute all the cases we should not write break in all the cases
//que--there is infinite while loop in which switch statement is present 
// what i should write in switch so it exit the loop
int main()
{   
    int num=2;
    switch(num){
        case 1: cout<<"first"<<endl;
        
        case 2: cout<<"seecond"<<endl;
        break;

        default: cout<<"enter ta validate condition"<<endl;
    }

    return 0;
}