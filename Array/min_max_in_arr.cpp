//to find minimun ans maximum elements in the array
#include<iostream>
#include <climits>
using namespace std;
int min_arr(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
       if(arr[i]<min){
        min=arr[i];
       }
    }
    return min;
}
int max_arr(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
       if(arr[i]>max){
        max=arr[i];
       }
    }
    return max;
}
int main()
{   int size;
    cout<<"enter tge size of the array"<<endl;
    cin>>size;
    int array[100];
    cout<<"enter the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"the minimum element in the array is :"<<min_arr(array,size)<<endl;
    cout<<"the maximum element in the array is :"<<max_arr(array,size)<<endl;

    return 0;
}