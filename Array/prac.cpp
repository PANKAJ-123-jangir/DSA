/*#include<iostream>
using namespace std;
void sortarr(int *arr,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;

        }
    }
    cout<<"sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the size of the array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortarr(arr,n);
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int leftOcc(int *arr,int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int RiOcc(int *arr,int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of the array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key :"<<endl;
    cin>>key;
    cout<<"left occurnace :"<<leftOcc(arr,n,key)<<endl;
    cout<<"right occurnace :"<<RiOcc(arr,n,key);
    return 0;
}
    */
   
#include<iostream>
#include<vector>
using namespace std;
int sinm(int *arr,int n,int k){
    int carry=0;
    vector<int>v;
    for(int i=n-1;i>=0 &&k>1; i--){
       int sum= carry+arr[i]+k;
       carry=sum/10;
       sum=sum%10;
       v.push_back(sum);
    }
    return v;
}
//arr[]=1,2,3,4  + 56
//--->arr= 1 2 9 0
int main(){
    return 0;
}    