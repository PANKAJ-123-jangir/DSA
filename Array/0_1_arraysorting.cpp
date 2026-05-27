//all elemnets in the array are only 0 and 1
//make all the zeroes to the leaft side and all 1s to the right side
//this is the first thought process comes to my mind implemented below
// #include<iostream>
// using namespace std;
// int arr(int arr[],int n){
//      int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             count++;
//         }
//     }
//     return count;
// }    
// void final(int arr1[],int n,int x){
//     for(int i=0;i<n-x;i++){
//        arr1[i]=0;
//     }
//     for(int i=n-x;i<n;i++){
//         arr1[i]=1;
//     }
// }
// int main()
// {   int size;
//     cout<<"size"<<endl;
//     cin>>size;
//     int array[100];
//     cout<<"array"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>array[i];
//     }
//     int x=arr(array,size);
//     cout<<"the total number of 1 "<<arr(array,size);
//     //arr1,size,number od 1=x
//     final(array,size,x);
//     cout<<" final array"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
        if(arr[left]==0 ){
            left++;
        }
        else if(arr[right]==1 ){
            right--;
        }else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    
}
int main()
{   
    int n,arr[100];
    cout<<"ente the size of the array"<<endl;
    cin>>n;
    cout<<"enter the array with only 0s and 1s "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the sorted array is :"<<endl;
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}