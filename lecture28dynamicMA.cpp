//dynamic memeory allocation me sabse pahel heap memery me ek block assign 
// hota hai (new int se) baad me wo satck memeory me pointer kara dete hai
// taki hum uska use ar sake 
// to initiaze a dynamic variable 
// int *a=new int;
//interger type ka dynamic memeory allocate hai jo point kar rahi hai a pe
//important#######
// 8 byte taken by a variable in static memory which is storing the address of dynamically allocated integer variable in heap memory
//4 or 2 byte taken by new int in the heap memory 
// so to create one integer variable 12byte memery is occupied 
// in case of dynamic memory allocation it is slow compared to static because it take more memeory space 
//but Dynamic memory allocation provides flexibility, efficient memory usage, and the ability to create 
//complex data structures, which static allocation cannot easily support.

//   *************dynamic array****************S
#include<iostream>
using namespace std;
void printarr(int *arr, int n){
    cout<<"the array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the value of N :"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printarr(arr,n);
    
    /*
    int b=11, c=12;
    int *ptr=&b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=c;
    cout<<"after "<<*ptr<<endl;
    cout<<b;
*/
    return 0;
}
//**********memory full infinte loop*********************8 */
//   while(true){
//    int *a=new
//   }
// int abc(int n){
// while(true){
//     int *a=new int;
// }
// return a;
// }