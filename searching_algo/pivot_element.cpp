//pivot --> it is the break point of yhe array when represented in form of graph
// array should be monotonic ans rotated for the presence of pivot element
#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else
        {   //arr[mid]<arr[e]
            e=mid;    
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{   int n=5;
    int arr[5]={4,5,1,2,3};
    cout<<"the pivot element in the array is :"<<pivot(arr,5);
    return 0;
}