//here i implementes row wise, col wise and diagonal sum
#include<iostream>
using namespace std;
void printarr(int arr[][4],int n,int m){
    cout<<"\n the array is :"<<endl;
   for(int row=0;row<n;row++){
    for(int col=0;col<m;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
}
void rowSum(int arr[][3],int n,int m){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
        cout<<"row "<<i+1<<" : "<<sum<<endl;
    }
    cout<<endl;
}
void colSum1(int arr[][3],int n,int m){
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i][j];
        }
        cout<<"column "<<j+1<<" : "<<sum<<endl;
    }
    cout<<endl;
}
void colSum2(int arr[][3],int n,int m){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[j][i];
        }
        cout<<"row "<<i+1<<" : "<<sum<<endl;
    }
    cout<<endl;
}
void diagonalSum(int arr[][3],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            if(i==j){
            sum=sum+arr[i][j];}
        }
        
    }
    cout<<"diagonal sum :"<<sum<<endl;
}
int main(){
    
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    rowSum(arr,3,3);
    colSum1(arr,3,3);
    colSum2(arr,3,3);   
    diagonalSum(arr,3,3);            
    //initialization
    /*
    ✅ 1. Full initialization (row-wise)
    int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
Most readable & recommended
Rows and columns are clearly visible

✅ 2. Flat (single-line) initialization
int a[2][3] = {1, 2, 3, 4, 5, 6};
Values filled row by row
Uses row-major order
Common in short programs

✅ 3. Partial initialization
int a[2][3] = {
    {1, 2},
    {4}
};
Missing elements are automatically set to 0
Result:
1 2 0
4 0 0

✅ 4. Initialization without specifying row size
int a[][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
Column size must be given
Compiler calculates number of rows


❌ This is invalid:
because we have to provide the column
to calculate the address
int a[][] = { {1,2}, {3,4} };   // ❌
✅ 5. Runtime initialization (using loops)
int a[2][3];
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        cin >> a[i][j];
    }
}


Values taken during execution
Most common in real programs
🔹 C++ STL way (Bonus – Interview 💡)
✅ 6. Using vector
vector<vector<int>> a = {
    {1, 2, 3},
    {4, 5, 6}
};
Dynamic size
Safer than raw arrays
Internally not fully contiguous
*/


    return 0;
}