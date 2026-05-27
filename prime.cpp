#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    bool prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    if(prime==false){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        cout<<n<<" is  a prime number"<<endl;
    }
    return 0;
}