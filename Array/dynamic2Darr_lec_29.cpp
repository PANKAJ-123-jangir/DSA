// we will understand how to initialize a dynamic 2D array
//homework --- make a jaggered array dynamically
#include<iostream>
using namespace std;
int main()
{   int row,col;
   cout<<"enter the row :"<<endl;
    cin>>row;
    cout<<"enter the columns :"<<endl;
    cin>>col;
    //int *ptr=new int;  // initialization  of integer
    //int *ptr2=new int[row];//initialization of the array 
    int **ptr3=new int*[row];
    //row hamesha int **ptr ke pahle input lene hoga must hai 
    /* above line se ek pointer allocate ho jata hai heap me
    yaha hum n ko row samajh sakte hai
    */
    for(int i=0;i<row;i++){
      ptr3[i]=new int[col];
    }
    cout<<"enter the array :"<<endl; 
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
       cin>>ptr3[i][j];
      }
    }
    cout<<"the array :"<<endl;
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
       cout<<ptr3[i][j]<<" ";
      }
      cout<<endl;
    }
    for(int i=0;i<row;i++){
      delete[] ptr3[i];
    }
   delete[] ptr3;
   //********most important*********** */
   // jo variable heapmemory me banaye last me sab ko delete karna hai 
    return 0;
}