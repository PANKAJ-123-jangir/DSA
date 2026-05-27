//to find the suare root of the number 
//by binary search
#include<iostream>
using namespace std;
long long int square_root(int x){
    long long int s=0,e=x-1;
    long long int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        long long int sqrt =mid*mid;
        if(sqrt==x){
            return mid;
        }
        else if(sqrt<x){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{   int n;
    cout<<"enter the number to find square root"<<endl;
    cin>>n;
    cout<<"the sqaure root of the : "<<n<<" is: "<<square_root(n);
    return 0;
}