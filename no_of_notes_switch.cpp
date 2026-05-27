#include<iostream>
using namespace std;
int main()
{  
    int amt;
    cout<<"enter the amount "<<endl;
    cin>>amt;
    int rem =0;
    switch(100){
        case 100: if(amt<100){
                  cout<<"no of 100 ruppes notes: 0"<<endl;}
                  else{
                    cout<<"number of 100 ruppes notes :"<<(amt/100)<<endl;
                    rem=amt%100;}
        case 50:  if(rem<50){
                    cout<<"no of 50 ruppes note :0"<<endl;}
                    else{
                    cout<<"number of 50 ruppes notes :"<<rem/50<<endl;
                    rem=rem%50;} 
        case 20:    if(rem<20){
                    cout<<"no of 20 rupprs notes:0"<<endl;}
                    else{
                        cout<<"no of 20 ruppes notes :"<<rem/20<<endl;
                        rem=rem%20;
                    }
        
        case 10: if(rem<10){
                    cout<<"no of 10 ruppes notes:0"<<endl;}
                    else{
                        cout<<"no of 10 ruppes notes :"<<rem/10<<endl;
                        rem=rem%10;
                    }
        case 1:  cout<<"no of 1 ruppes notes :"<<rem/1<<endl;
                            
        
    }
    return 0;
}