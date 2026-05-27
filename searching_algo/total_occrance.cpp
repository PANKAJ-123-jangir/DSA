//array = ascendig or decending order
//we have to find the number of times the key element occurs in the array
#include<iostream>
using namespace std;
int leftOcc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while (s<=e)
    {
        if(key==arr[mid]){
             ans=mid;
            e=mid-1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int rightOcc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while (s<=e)
    {
        if(key==arr[mid]){
             ans=mid;
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{   int n=8;
    int array[8]={1,3,4,5,5,5,7,9};
    int key=5;
    int left=leftOcc(array,8,5);
    int right=rightOcc(array,8,5);
    int occurance=right- left+1;
    cout<<"total number of occurance of "<<key<<" is :"<<occurance<<endl;
    return 0;
}