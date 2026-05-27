#include<iostream>
#include<math.h>
using namespace std;
//--- below function store n=binary binput number into array from backward
// void intoarr(int n){
//     int arr[8]={0};
//     int i=7;
//     while(n>0 && i>0){
//       //  int bit=n&1;
//         //arr[i]=bit;  //this logic gives wrong ans
//                        //because compiler think input in the foem of decimal  
//        // n=n>>1;
//        int bit=n%10;
//        arr[i]=bit;
//        n=n/10;
//         i--;
//     }
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
// }
void deci(int n){
    int arr[8]={0};
    int i=0;
    while(n>0 && i<8){
      //  int bit=n&1;
        //arr[i]=bit;  //this logic gives wrong ans
                       //because compiler think input in the foem of decimal  
       // n=n>>1;
       int bit=n%10;
       arr[i]=bit;
       n=n/10;
        i++;
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     int answer=0;
    for(int i=0;i<8;i++){
        if(arr[i]==1){
            answer=pow(2,i)+answer;
        }
    }
    cout<<"deciml form :"<<answer<<endl;
}

int main()
{ 
    
    deci(1111);
    return 0;
}