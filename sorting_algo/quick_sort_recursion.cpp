#include<iostream>
using namespace std;
int partition(int *arr,int s, int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int p=s+cnt;
    swap(arr[p],arr[s]);
    int i=s,j=e;
   
    while(i<p && j>p){
         while(arr[i]<pivot){
        i++;
        }
    while(arr[j]>pivot){
        j--;
        }
        if(i<p && j>p){
            swap(arr[i],arr[j]);
        }
        else{
            break;
        }

    }
    return p;
}
void quick_sort(int *arr,int s, int e){
    if(s>=e){
        return ;
    }
    int p=partition(arr,s,e);
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);
}
int main(){
    int arr[6]={3,1,8,5,1,9};
    quick_sort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}