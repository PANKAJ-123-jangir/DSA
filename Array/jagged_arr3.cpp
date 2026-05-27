//implementation of jagged array by dynamic memory allcation using user input rows and columns
#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"ente the number of rows :"<<endl;
    cin>>rows;
    int **arr=new int*[rows];
    int *col=new int[rows];
    for(int i=0;i<rows;i++){
        cout<<"enter the elements in "<<i+1<<" row"<<endl;
        cin>>col[i];
        arr[i]=new int[col[i]];
        cout<<"enter the elements in "<<i+1<<" row "<<endl; 
        for(int j=0;j<col[i];j++){
             cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"jagged array :"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<rows;i++){
        delete[] arr[i];
    }
    delete[] arr;
    delete[] col;

    return 0;
}