#include<iostream>
using namespace std;
void printarr(int *arr, int n,int start=0){
    //###subse important baat default argumnent hum kewal rightmost argument
    //ko hi bana sakte hai
    for(int i=start;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void greet(string name = "Student")   // default argument
{
    cout<<"Hello "<<name<<endl;
}

int main()
{   
    int n=5, start=3;
    int arr[15]={1,2,3,4,5,6,7,88};
    cout<<"without argumment :"<<endl;
    printarr(arr,n);
    cout<<"with argument :"<<endl;
    printarr(arr,n,3);
    greet("Pankaj");   // user argument
    greet();           // default argument used
    // agar hum function me argumnet pass karenge to function argumment
    //ko consider karke print kar dega
    //agar hum function ko bina argumnet ke call karnge fhir bhi wo execute
    //hoga aur jo default me arumnent set kiya hai wo print ho jayega

    return 0;
}