//fix this code after
//all zeroes on right and values in right

// #include<iostream>
// #include<vector>
// using namespace std;
// void abs(int arr[],int n){
//     int i=0,j=0;
//     while(i<=n){
//         if(arr[i]!=0){
//             i++;
//         }
//         else if(arr[j]==0){
//             j--;
//         }
//         else{
//             swap(arr[i],arr[j]);
//         }
        

//     }
// }
// void print_arr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[5]={1,0,2,3,0};
//     abs(arr,5);
//     print_arr(arr,5);
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = 0;   // position to place next non-zero

    // Move non-zero elements to front
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining positions with zero
    while(index < n) {
        arr[index] = 0;
        index++;
    }

    // Print result
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
