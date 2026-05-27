//implemetation of jagged array by using arrays and input from user
#include<iostream>
using namespace std;
int main()
{   
    //input number of rows user wants
    int row,col;
    cout<<"enter the number of rows :"<<endl;
    cin>>row;
    //initialize a 2D array and one array for storing columns
    int arr[20][20];
    int cols[10];

    for(int i=0;i<row;i++){
        cout<<"enter the columns for "<<i+1<<" row :"<<endl;
        cin>>cols[i];
        cout<<"enter the elemnts in the "<<i+1<<" row"<<endl;
        for(int j=0;j<cols[i];j++){
            cin>>arr[i][j];
        }
    }
        cout<<endl;
        cout<<"Jagged array :"<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<cols[i];j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    
    return 0;
}