//find the peak element in the  mountain array
//arry=1,2,5,2---> peak element is 5
//peak element is greater than its previous elements and also its next elemets
#include<iostream>
using namespace std;
int peak(int arr[],int size){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{  //arr[mid]>arr[mid+1]
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{   
    int n=8;
    int array[8]={1,3,5,8,4,2,1,0};
    int peak_element=peak(array,n);
    cout<<"the peak element of the array is: "<<peak_element;
    return 0;
}