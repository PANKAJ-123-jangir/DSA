#include<iostream>
using namespace std;
int summ(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[10]={1,2,3,4,5};
    cout<<"the memory address of thre array :"<<arr<<endl;
    cout<<"value at first index :"<<*arr<<endl;
    cout<<"value at second index :"<<*arr+1<<endl;
    cout<<"value at 4th index :"<<*arr+4<<endl;
    
    cout<<"address of 2nd block :"<<arr+1<<endl;
    cout<<"address of 1st block :"<<&arr[1]-1<<endl;
    cout<<"address of 2nd block :"<<&arr[0]+1<<endl;
    cout<<"address of 2nd block :"<<&arr[1]<<endl;
    cout<<"address of 2nd block :"<<&arr[1]<<endl;
    cout<<"address of 4th block :"<<&arr[0]+3<<endl;
    cout<<"address of 4th block :"<<arr+3<<endl;
    cout<<"value of 4th block :"<<*(arr+3)<<endl;
    //we can also write like that
    //to print index 4 value
    int i=4;
    cout<<i[arr]<<endl; //i[arr]=*(i+arr)   arr[i]=*(arr+i)  are same
    int arr1[10];
    //arr=arr+1;--> this will error because arr is mapped to a address 
    //in symbol table which cannot be changed
    int *p1=&arr1[0];
    cout<<"before :"<<p1<<endl;;
    p1=p1+1;
    cout<<"after :"<<p1<<endl;
     
    int a[6]={1,2,3,5,6,8};
    cout<<summ(a,6);

    //now i we want to print the sum of part of the array 
    //means from index 3-6 so we can pass *(arr+3) size-3
    cout<<endl<<summ(a+3,3)<<endl;


    char ch[5]="abcd";
    char *pt=&ch[0];
    cout<<pt<<endl;
    cout<<*pt<<endl;
    
    int q=10;
    int*w=&q;
    int**r=&w;
    **r=**r+1; //q becomes 11
    cout<<q<<endl;
    cout<<w<<endl;
    *r=*r+1;//address increased by 4
    //because we are inrementiing the address of w by 1 
    //and we know that w is int which occupies 4 bytes so add is incre by 4
    //but in case of int variable the **r stores the value of int q
    //so the value can be incremented by 1 as it is int type
    //** agar koi pointer ek address store kaar raha hai 
    //to value 4 increase hogi in case of int 
    cout<<w;     
    int array[5];
    int *v=array;
    cout<<v[2]<<endl; //v[2]==*(v+2)
    char h='a';
    char *m= &h;
    cout<<&h;//this will print all memeory block from a to till null pointer
    cout<<endl<<*m; //a
    /*void update(int &x)
{
    x = 50;   // compiler works on address automatically
              // for our convinence
}
update(a);
*/    return 0;

}