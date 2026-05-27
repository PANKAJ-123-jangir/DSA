//int array[1000]={0};
//array kke har index pas zero value ho jayengi
//question--->how to initialize array with value 1 in all indices?
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   
    int a[15]={0};
    for(int i=0;i<15;i++){
        cout<<a[i]<<" "; //output--> 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
    }
cout<<endl;
    //to initialize array with values 1
    //1 ko ham directly zero jaise initilize nahi kar sakta hai
    //we can use loop
    //or in modern advanced way we can use FILL ALGORITHM, include<algorithm> necessary

    int b[10];
    fill(b,b+10,1);
    for(int i=0;i<10;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}