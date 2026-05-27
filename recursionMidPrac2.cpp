#include<iostream>
using namespace std;
void reverseNO(int n){
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    cout<<digit<<" ";
    reverseNO(n);
    
}
int sumDigits(int n){
    if(n==0){
        return 0;
    }
    int digit=n%10;
    return digit+sumDigits(n/10);
}
bool isSortArr(int *arr,int n){
    if(n==0){
        return true;
    }
    if(n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return isSortArr(arr+1,n-1);
}
int binary(int *arr,int s,int e,int key){
    if(s>e){
        return -1;
    }
    cout<<"index :";
    int mid=s+(e-s)/2;
    if(arr[mid]==key){ 
        return mid;
    }
    if(arr[mid]>key){
        return binary(arr,s,mid-1,key);
    }
    if(arr[mid]<key){
        return binary(arr,mid+1,e,key);
    }
    
}
int sumArr(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return arr[0]+sumArr(arr+1,size-1);
}
int linSerach(int *arr,int size,int key){
    if(size==0){
        return -1;
    }
    if(arr[0]==key){
        return arr[0];
    }
    return linSerach(arr+1,size-1,key);
}
int powNO(int base,int n){
    if(n==0){
        return 1;
    }
    int half=powNO(base,n/2);
    if(n%2==0){
        int ans=half*half;
        return ans;
    }
    else{
        int ans=base*half*half;
        return ans;
    }
}
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    int digit=n%10;
    int rev1=rev*10+digit;
    int ans=reverse(n/10,rev1);
    return ans;
}        
    bool ispalin(int n){
    int ans=reverse(n,0);
    if(ans==n){
        return 1;
    }
    else{
        return 0;
    }
} 
bool isPalindrome(string st,int s,int e){
    if(s>=e){
        return true;
    }
    if(st[s]!=st[e]){
        return false;
    }
    return isPalindrome(st,s+1,e-1);
}  
int main(){
   // cout<<sumDigits(193);
   // reverseNO(123);
   //int base=5;
   int n=123;
   string st="123";
   cout<<isPalindrome(st,0,st.length()-1);
   //cout<<powNO(base,n);
    //int arr[5]={1,2,12,4,5};
    //cout<< linSerach(arr,5,key);
    //cout<<sumArr(arr,5);
    //cout<<binary(arr,0,4,key);
    cout<<endl;
   // cout<<isSortArr(arr,5);
    return 0;
}