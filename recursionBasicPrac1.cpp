//basic recursion questions
#include<iostream>
using namespace std;
void printCount(int n){
    if(n==0){
        return ;
    }
   
    printCount(n-1);
    cout<<n<<" ";
    
}
void printCount1(int n){ // reverse count
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    printCount1(n-1);
    
}
int printSum(int n){
    if(n==0){

     return 0 ;
    }
    return n+printSum(n-1);
   
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int pow(int base,int power){
    if(power==0){
        return 1;
    }
    return base*pow(base,power-1);
}
int countDigit(int n){
    if(n==0){
        return 0;
    }
    return 1+countDigit(n/10);
    
}
void printDigits(int n){
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    printDigits(n);
    cout<<digit<<" ";
}
int main(){
    // int n;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // printCount(n);
    // cout<<endl;
    // printCount1(n);
    // cout<<"sum: "<< printSum(n);
    //cout<<fact(n);
    //cout<<pow(2,4);
    //printDigits(123);
    return 0;
}