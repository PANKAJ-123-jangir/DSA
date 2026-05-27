//to find unique element in the array
#include<iostream>
using namespace std;
 int single(int array[],int n){
    int ans=0;
     for(int i=0;i<n;i++){
        ans=ans^array[i];
    }
    return ans; 
}
int main()
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the single unique elemenst is :"<<single(arr,size);
    return 0;
}