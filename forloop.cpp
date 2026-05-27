#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=15;i++){
        cout<<i<<" ";
        if(i&1){
            continue;   //insights -- this program print even numbers
        }
        i++;
    }
    
    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<" "<<j<<" "<<'\n';
        }
    }
    return 0;
}