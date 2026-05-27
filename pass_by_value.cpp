#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<"value of n by function is :"<<n<<endl;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    dummy(n); 
    //here the value of n is incremented 
    cout<<"the valur of n is :"<<n<<endl;
    // then why the value if n is still same?
    //beacuse the function doesnot uses the same n
    //it creates the copy of n means different memory is used
    //and changes made to function doesnot affect the main funtion as memory block id different
    //if we want the change then we should point the int n yo the same memory address
    
    return 0;
}