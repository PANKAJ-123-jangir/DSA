// #include<iostream>
// using namespace std;
// int pivot(int arr[],int size){
//     int s=0,e=size-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }
// int binary_search(int arr[],int s,int e,int key){
//     int start=s,end=e,i;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[i]==mid){
//             return mid;
//         }
//         else if(arr[i]<mid){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }
// int search(int arr[],int size,int key)
// {   
//     int pivo=pivot(arr,size);
//     if(key>=pivo && key<=size-1){
//         return binary_search(arr,pivo,size-1,key);
//     }
//     else{
//         return binary_search(arr,0,pivo-1;key);
//     }
//     return -1;
// }
//     int main(){
//      int n=6;
//     int arr[6]={35,45,3,6,19,27};
//     cout<<"pivot :"<<pivot(arr,6);
//     int key=19;
//     cout<<"key prsent at :"<<binary_search(arr,6,key);
//     return 0;
// }
#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int s = 0, e = size - 1;

    while(s < e){
        int mid = s + (e - s) / 2;

        if(arr[mid] >= arr[0]){
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

int search(int arr[], int size, int key){
    int p = pivot(arr, size);

    // search in right part
    if(key >= arr[p] && key <= arr[size - 1]){
        return binarySearch(arr, p, size - 1, key);
    }
    // search in left part
    else{
        return binarySearch(arr, 0, p - 1, key);
    }
}

int main(){
    int arr[6] = {35, 45, 3, 6, 19, 27};
    int key = 19;

    cout << "Pivot index: " << pivot(arr, 6) << endl;
    cout << "Key present at index: " << search(arr, 6, key);

    return 0;
}
