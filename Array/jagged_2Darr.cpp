//implementation of jagged array by dynamic memory allocation  
//study types of macros in GFG 
#include<iostream>
using namespace std;
int main(){
    int row=3;
   // cout<<"enter the number of rows :"<<endl;
    //cin>>row;
    int **arr=new int*[row];
    arr[0]=new int [2];
    arr[1]=new int [1];
    arr[2]=new int [4];
    arr[0][0]=4; arr[0][1]=1;
    arr[1][0]=3;
    arr[2][0]=1; arr[2][1]=7;  arr[2][2]=9;   arr[2][3]=10;
    for(int i=0;i<2;i++){
        cout<<arr[0][i]<<" ";
    } 
    delete[] arr[0];
    delete[] arr[1];
    delete[] arr[2];
    delete[] arr;
    return 0;
}