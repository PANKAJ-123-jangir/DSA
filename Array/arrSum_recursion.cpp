#include<iostream>
using namespace std;
int arrSum(int *arr,int size){
    if(size==0){
        cout<<"array size is zero"<<endl;
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int ans=arr[0]+arrSum(arr+1,size-1);
    return ans;
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    cout<<"the sum of array is :"<<arrSum(arr,n);

    return 0;
}