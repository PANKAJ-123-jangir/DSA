//arr=[1,2,3,4,5,6] -->do do ke jode me swap karna hai 
//ans=[2,1,4,3,6,5]--> like this
#include<iostream>
using namespace std;
void input_arr(int array[],int n){
   cout<<"enter the elments to insert into the array"<<endl;
   for(int i=0;i<n;i++){
    cin>>array[i];
   }
}
void print_arr(int array[],int n){
    cout<<"the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
void swaparray(int array[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
        swap(array[i],array[i+1]);
        }
    }
    print_arr(array,n);
}
int main()
{   
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int arr[100];
    input_arr(arr,size);
    print_arr(arr,size);
    swaparray(arr,size);
    return 0;
}