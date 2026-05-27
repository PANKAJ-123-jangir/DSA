#include<iostream>
using namespace std;
//concept even number last bit always = 0,while odd last bit=1
//and with 1 gives the last bit of the number
bool isEven(int n){
    if(n&1){
        return 0;
    }
return 1;
 }
int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    if(isEven(num))
        cout<<"even"<<endl;
    else 
        cout<<"ODD"<<endl;
    return 0;  
}