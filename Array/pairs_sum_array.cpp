//give varialble=x;
//we have to find out how many pairs present in the array whose sum is equal to x
#include<iostream>
using namespace std;
 void pair_sum(int arr[],int size,int s){
     for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==s){
                cout<<i<<","<<j<<" ";
            }
        }
     }
 }