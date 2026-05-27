#include<iostream>
using namespace std;
void sort(int *arr, int s, int e){

    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    //create two array of len1 and len2
    int *first=new int[len1];
    int *second=new int[len2];

    int mainindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainindex++];
    }
    mainindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainindex++];
    }

    int index1=0,index2=0;
    mainindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainindex++]=first[index1++];
        }
        else{
            arr[mainindex++]=second[index2++];
        }
    }

    while(index1<len1){    
        arr[mainindex++]=first[index1++];
    }
    while(index2<len2){    
        arr[mainindex++]=second[index2++];
    }

    delete[] first;
    delete[] second;
}
void mergesort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;
    // sort left part
    mergesort(arr,s,mid);
    // sort for right part
    mergesort(arr,mid+1,e);
    sort(arr,s,e);
}
int main()
{
    int arr[6]={2,5,1,8,4,3};
    mergesort(arr,0,5);
    cout<<"sorted array :"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}