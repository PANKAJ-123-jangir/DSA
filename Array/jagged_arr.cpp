//implementation of jagged array bt using pointers
#include<iostream>
using namespace std;
int main(){
    //first make the each row separetly
    int row1[]={1,2,3};
    int row2[]={1,2};
    int row3[]={4,5,6,7,8};
    int row4[]={1};
    //now put these rows into a another pointer array
    int* arr []={row1,row2,row3,row4};
    cout<<arr[0][0]<<" "<<arr[0][1]<<" "<<arr[0][2]<<endl;
    cout<<arr[1][0]<<" "<<arr[1][1]<<endl;
    cout<<arr[2][0]<<" "<<arr[2][1]<<" "<<arr[2][2]<<" "<<arr[2][3]<<" "<<arr[2][4]<<endl;
    cout<<arr[3][0]<<endl;
    return 0;
    //*************important**************88 */
    //basically when we make the 2d array 
    //first we make the differnt rows or we can say arrays
    //then we make a array pointer and store that arrays in the pointer array
    //after that it is behave as 2d array  
}