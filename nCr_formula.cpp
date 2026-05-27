#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int nCr(int n,int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    return num/deno;
}
int main()
{
    int n,r;
    cout<<"enter thr value of nand r"<<endl;
    cin>>n>>r;
    cout<<"the answer of nCr is :"<<nCr(n,r)<<endl;
    return 0;
}