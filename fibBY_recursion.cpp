//fibanacci apllication -- question-70 leetcode
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
/*int fiba(int n){
    int st=0,next=1;
    for(int i=2;i<=n;i++){
        int result=st+next;
        st=next;
        next=result;
        
    }
    return next;
}*/
int main(){
    int n;
    cout<<"enter the  term "<<endl;
    cin>>n;
    cout<<"the "<<n<<" th term is :"<<fib(n);
    return 0;
}