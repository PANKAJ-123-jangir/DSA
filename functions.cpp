//like when we find power of any number we ahve to weite code every time 
//if we want to aclculate the power of diff number
//so functions are used , code is written once then called multiple times as required
//donot write cin and cout inside the function for good prctise
//use void function to write cin and cout inside it 
#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;    
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return(ans);//cout cannot be a goood practise to write iinside
                        //is reduce cose reusability
}

int main()
{ 
     int a,b; 
    cout<<"enter the values of number and its power"<<endl;
    cin>>a;
    cin>>b;
   cout<<"answer is= "<< power(a,b);
    return 0;
}