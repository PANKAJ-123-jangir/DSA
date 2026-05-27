#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    //if array has one or zero elements
    if(size==0 || size==1){
        return true;
    }
    //if arr[o]>ar[1] then false
    if(arr[0]>arr[1]){
        return false;
    }
    //store the fn return value each time last remain value will be our answer
    else{
        bool ans =isSorted(arr+1,size-1);
        return ans;
    }
    
}
int main()
{   
    int n=4;
    int arr[n]={2,4,6,6};
    if(isSorted(arr,n)){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    return 0;
}