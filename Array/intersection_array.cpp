// //find the intersection of two arrays
// //array are in ascendind order
// //arr1=1,2,3,4,5
// //arr2=3,5,6,7,8,9
// //1st methods--> pick each elemnent form aar1 and match with arr2 elments one by one
// //but this method have n*m time complexity not accepted
// #include<iostream>
// using namespace std;
// void inter(int arr1[],int arr2[],int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 arr2[j]=-1; 
//                 break;
//             }
//         }
//     }
    
// }
// int main()
// {   
//     int size1=5;
//     int size2=6;
//     int arr1[5]={1,2,3,4,5};
//     int arr2[6]={3,5,6,7,8,9};
//     inter(arr1,arr2,size1,size2);
//     return 0;
//     //this program is not optimed since array are ascending order we can optimize it more
// }
#include<iostream>
using namespace std;
//best optimized solotion only by using two pointer approch
void inter(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
}

int main() {   
    int size1 = 5;
    int size2 = 6;

    int arr1[5] = {1,2,3,4,5};
    int arr2[6] = {3,5,6,7,8,9};

    inter(arr1, arr2, size1, size2);
    return 0;
}

 