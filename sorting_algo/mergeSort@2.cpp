#include<iostream>
#include<vector>
using namespace std;
void sort(int *arr,int s,int e){
    vector<int>temp;
    int mid=s+(e-s)/2;
    int left=s;
    int right=mid+1;
    while(left<=mid && right<=e){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;
    }
    while(right<=e){
        temp.push_back(arr[right]);
            right++;
    }
    for(int i=0;i<temp.size();i++){
        arr[s+i]=temp[i];
    }
}
void mergeSort(int *arr,int s, int e){
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    sort(arr,s,e);
}
int main()
{
    int arr[6]={3,1,7,4,9,5};
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}