//checking input number id power of two or not
#include<iostream>
using namespace std;
int ispowerof_two(int num){
    int count=0;
    while(num!=0){
        if(num & 1){
            count++;
        }
        num=num>>1;
    }
    return count;
}
int main()
{   
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int x=n;
    int count=ispowerof_two(n);
    if(count==1){
       cout<<"power of 2"<<endl;
    }
    else{
        cout<<"not power of 2"<<endl;
    }
    int power=0;
    while(n!=1){
        n =n/2;
        power++;
    }
    cout<<power<<"is the power of 2 which gives :"<<x<<endl;
    return 0;
}