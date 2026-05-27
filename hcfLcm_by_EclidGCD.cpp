//Euclid GCD therom
//using iterative approch
//for finding hcf
//if a>b then HCF(a-b,b);
//if b>a then HCF(b-a,a);
//LCM=a*b/HCF(a,b);
#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main()
{
    int a=24,b=72;
    cout<<"hcf :"<<gcd(a,b)<<endl;
    cout<<"LCM :"<<lcm(a,b);
    return 0;
}