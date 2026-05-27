#include<iostream>
using namespace std;
int poww(int x,int n){
    int result=1;
    while(n>0){
        if(n&1){
        result=result*x;
        }
    x=x*x;
    n=n>>1;
    }
   return result; 
}
int main(){
    int x,n;
    cout<<"enter the number :"<<endl;
    cin>>x;
    cout<<"enter the power :"<<endl;
    cin>>n;
    cout<<"the answeris :"<<poww(x,n);
    return 0;
}