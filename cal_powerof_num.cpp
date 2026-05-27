      //program to calculate power of any number 
#include<iostream>
using namespace std;
int main()
{   
    int x,n;
    cout<<"enter the number"<<endl;
    cin>>x;
    cout<<"enter the power of "<<x<<endl;
    cin>>n;
    long long int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*x;
    }
    cout<<"answer="<<ans<<endl;
     return 0;


}