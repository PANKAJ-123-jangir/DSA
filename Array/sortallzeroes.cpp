//there is an array which contain numbers and zeores
//we have to sort the array and put all the remaining zeroes to the right 
#include<iostream>
#include<algorithm>
using namespace std;
//first thing comes to mind is 
//1.find the number of zeroes in the array
//2.shift all the zeroes to the right side of the array
//3.if zerocount=k,arrsize=n
//4.apply sorting algo from i=0 to i<=n-k

void bubblesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void sortt(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(j!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{   
    int n=6;
    int array[]={9,0,1,4,0,0};
    cout<<"before sorting"<<endl;
    printarr(array,n);
    cout<<"after sorting :"<<endl;
    bubblesort(array,n);
    printarr(array,n);
    return 0;
}