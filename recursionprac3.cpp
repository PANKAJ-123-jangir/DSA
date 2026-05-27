#include<iostream>
#include<algorithm>
using namespace std;
void revString(string &st,int s,int e){
    if(s>e){
        return ;
    }
    swap(st[s],st[e]);
    s++; e--;
    revString(st,s,e);
    
}
string rev(string st,int i,int k){
   if(i>=k){
    return st;
   }
   swap(st[i],st[k]);
   i++;  k--;
   return rev(st,i,k);
}
bool isPalindrome(string st,int s,int e){
    if(s>e){
        return true;
    }
    if(st[s]!=st[e]){
        return false;
    }
    return isPalindrome(st,s+1,e-1);
}
void bubbleSoet(int *arr,int size){
     if(size==0 || size==1){
        return ;
     }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        
    }
return bubbleSoet(arr,size-1);
}
void selectionSort(int *arr,int n){
    if(n==0 || n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        int smallest=0;
        if(arr[i]<arr[smallest]){
            smallest=i;
        }
        swap(arr[0],arr[smallest]);
    }
    
    selectionSort(arr+1,n-1);
}
void insertionSort(int*arr,int n){
    if(n==0 ||n==1){
        return ;
    }
}
// insertion sort ko wapas samjh kar try karna
int main(){
    string s="abcde";
    int arr[5]={2,5,1,7,9};
   // bubbleSoet(arr,5);
   selectionSort(arr,5);
    //cout<<"after bubbbe sort"<<endl;
    cout<<"after selection sort"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   // revString(s,0,s.length()-1);
  // string ans=rev(s,0,3);
  // cout<<ans;
   cout<<endl;
   //cout<<isPalindrome(s,0,s.length()-1);

    return 0;
}