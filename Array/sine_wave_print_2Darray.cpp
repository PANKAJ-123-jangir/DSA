#include<iostream>
using namespace std;
void printarr(int arr[][3], int n, int m){
    for(int j=0;j<m;j++){
        if(j%2==0){
           for(int i=0;i<n;i++){
               cout<<arr[i][j]<<" ";
           }
        }   
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
     
    }
    
}
int main(){
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
printarr(arr,3,3);
    return 0;
}