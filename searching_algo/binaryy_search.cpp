#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int key){
    int start=0,end=size-1,i;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[i]==mid){
            return mid;
        }
        else if(arr[i]<mid){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{   
    int array[6]={1,3,5,7,8,78};
    int key=3;
    cout<<"ytrytf"<<endl;
    int index= binary_search(array,6,3);
    cout<<"index of key:"<<index<<endl;
    return 0;
}