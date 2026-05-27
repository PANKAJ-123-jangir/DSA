//sum of all element of tje array 
#include<iostream>
using namespace std;
int sumof_array(int array[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
       sum=sum+array[i];
    }
    return sum;
}
int main()
{   
    int size;
    cout<<"ente rthe size of the array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the elemenst to insert in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the sum of this array is :"<<sumof_array(arr,size)<<endl;

    return 0;
}