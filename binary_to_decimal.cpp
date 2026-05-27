#include<iostream>
#include <cmath>
using namespace std;
 void binary_decimal(int n){
    int array[32];
    for(int i=0;i<32;i++){
        array[i]=n%10;
        n=n/10;
    }
 }
 int final(int arr[]){
    int ans=0;
     for(int i=1;i<=8;i++){
        if(arr[i]==1){
        ans=arr[i]*pow(2,i)+ans;
        }
    }
    return ans;
 }
int main()
{   
    int n;
    int array[32];
    cout<<"enter the number"<<endl;
    cin>>n;
   binary_decimal(n);

   // final(binary_decimal(n));
    return 0;
}