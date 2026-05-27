#include<iostream>
#include<vector>
using namespace std;
int sort(int *arr,int s,int e){
    vector<int>temp;
    int mid=s+(e-s)/2;
    int left=s;
    int right=mid+1;
    int count=0;
    while(left<=mid && right<=e){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            
            left++;
        }
        else{
            temp.push_back(arr[right]);
            count=count+(mid-left+1);
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
     return count;
}
int mergeSort(int *arr,int s, int e){
    int cnt=0;
    if(s>=e){
        return 0;
    }
    int mid=s+(e-s)/2;
    cnt+=mergeSort(arr,s,mid);
    cnt+=mergeSort(arr,mid+1,e);
    cnt+=sort(arr,s,e);
    return cnt;
}
int main(){
    int arr[10]={4,1,6,3,4,2,7,4,8,9};
    cout<<" the inversion count: "<<mergeSort(arr,0,9);
    return 0;
}