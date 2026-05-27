#include<iostream>
using namespace std;
void cntInversion(int *arr,int n){
  int count=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j] && j>i){
            cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
            count++;
        }
    }
  }  
  cout<<count;
}
int main(){
    int arr[5]={5,3,2,4,1};
    cntInversion(arr,5);
    return 0;
}