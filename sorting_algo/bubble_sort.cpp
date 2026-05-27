//in every i iteration maximum element 
//is found and placed at the the nth place in the array
//time commplexity-->O(n2) worst also
//best case-->O(n)
#include<iostream>
using namespace std;
void printarr(int array[],int size){
    cout<<"array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void bubble_sort(int array[],int n){
    for(int i=0;i<n-1;i++){

        bool swapped=false;//when array is sorted then there is no swap
        //so swapped is created if swapped is false then break the loop

        for(int j=0;j<n-i-1;j++){
            //we write j<n-i-1 because every ith iteartion last element is sorted
            //so we donot need to traverse full array every time
            if(array[j]>array[j+1]){
                swapped =true;
                swap(array[j],array[j+1]);
            }
        }
        if(swapped==false){
            break;
        }
    }
}
int main()
{   
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"before sorting"<<endl;
    printarr(arr,size);
    bubble_sort(arr,size);
    cout<<"after sorting "<<endl;
    printarr(arr,size);
    return 0;
}