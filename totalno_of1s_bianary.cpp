#include<iostream>
using namespace std;

    
     int binary1s(int n){
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
     }
     int main()
{
    //count number of 1s in a binary number
    int no;
    cout<<"enter the number"<<endl;
    cin>>no;
    cout<<"total number of ones = "<<binary1s(no);
    return 0;
}
