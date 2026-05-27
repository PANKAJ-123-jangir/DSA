#include<iostream>
using namespace std;
#include<stack>
int main()
{
    int n;
    cout<<"enter the value"<<endl;
    cin>>n;
    stack<int>s;
    while(n!=0){
     int bit=n%2;
     s.push(bit);
     n=n/2;
    }
    cout<<"bianry="<<endl;
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}