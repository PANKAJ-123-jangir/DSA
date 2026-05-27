//selection sort 
//we conider a[0] as smallest element and from a[1] to a[n]
//we find the smallest elemnet in the array if present
//then swap smallest element with arr[i]
//1 for loop from i to n-1
//2nd loop from j=i+1 to j<=n
//time complexity---> O(n2)
//same time complexity in best case and worst case
//best to use when array size is small
//space complexity --> constant

#include<iostream>
using namespace std;
void selection_sort(int array[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<=size;j++){

            if(array[min]>array[j])
            min=j;
        }
        swap(array[min],array[i]);
    }
}
int main()
{   
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" element :"<<endl;
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}