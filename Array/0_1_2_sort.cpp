//array contain onlt 0 1 and 2 values sort them 
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 void sorting(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
        else //(arr[mid]==1)
        {
            mid++;
        }
    } 
}
int main()
{   int n=6;
    int array[6]={1,0,2,1,0,2}; 
    cout<<"array before sorting:"<<endl;
    print(array,n);
    cout<<"array after sorting:"<<endl;
    sorting(array,n);
    print(array,n);
    return 0;
}