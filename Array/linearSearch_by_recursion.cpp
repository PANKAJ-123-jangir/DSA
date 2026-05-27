#include<iostream>
using namespace std;
void printarr(int *arr,int size){
    cout<<"the size of the array is: "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool LineraSearch(int *arr,int size,int key){
    printarr(arr,size);
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    return LineraSearch(arr+1,size-1,key);

}
int main(){
    int n=5;
    int key=3;
    int arr[n]={1,4,6,3,7};
    if(LineraSearch(arr,n,key)){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<" key is not found "<<endl;
    }
    return 0;
}