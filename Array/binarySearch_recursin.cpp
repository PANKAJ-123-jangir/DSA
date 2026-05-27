#include<iostream>
using namespace std;
bool binarySearch(int *arr,int key,int s,int e){
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;
     if(arr[mid]==key){
        return 1;
    }
    if(key>arr[mid]){
        return(binarySearch(arr,key,mid+1,e));
    }
    if(key<arr[mid]){
        return (binarySearch(arr,key,s,mid-1));
    }

}
int main(){
    int n=6;
    int arr[n]={3,4,7,8,9,12};
    int key=1;
    if(binarySearch(arr,key,0,5)){
        cout<<"present"<<endl;
    }    
    else{
    cout<<"not present"<<endl;}

    return 0;
}