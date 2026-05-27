//it count the total number of 1's in the two input numbers
#include<iostream>
using namespace std;
int total_1(int a){
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int main()
{
    int x,y;
    cout<<"enter the 2 numbers"<<endl;
    cin>>x>>y;
    cout<<"total no of 1's is:"<<total_1(x)+total_1(y);
    return 0;
}