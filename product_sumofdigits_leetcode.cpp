#include<iostream>
using namespace std;

    int diff(int n){
    int product=1;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        product=product*digit;
        sum+=digit;
        n=n/10;
    }  
    int answer=(product-sum);
    return answer;
    }
    int main(){
        int n;
     cout<<"enter the number"<<endl;
    cin>>n;
    return 0;
}
