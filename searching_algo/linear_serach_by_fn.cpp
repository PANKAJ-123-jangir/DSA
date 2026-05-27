//linera seaarch
#include<iostream>
using namespace std;
void search(int array[],int n,int key){
    int count=0,index=0;
    for(int i=0;i<n;i++){
        if(array[i]==key){
            count++;
             index=i;
            break;
        }
    }
    if(count>=1){
        cout<<"element found at index "<<index<<endl;
    }else{
        cout<<"not found"<<endl;
    }
}
int main()
{   
    int size;
    cout<<"enterr the siz eof the array"<<endl; 
    cin>>size;
    int arr[100];
    cout<<"enter the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key to serach in the array"<<endl;
    cin>>key;
    search(arr,size,key);
    return 0;
}