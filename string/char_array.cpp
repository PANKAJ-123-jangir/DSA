//when we have to input a word then char array is used
//syntax=char name[size];
//#### important this concept
//'A' to 'Z' → ASCII 65–90
//'a' to 'z' → ASCII 97–122
//to convert capital to small add 32 and for small to capital -32
#include<iostream>
using namespace std;
//function to fing the length of the character array
int len(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
//'\0' -->this is called null character it stop the printing next
// character which comes after that
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    char ch='A';
    ch=ch+32;
    //better practice ch=ch+('a'-'A');
    cout<<ch;
//we can also use for loop but it already inbuilt for character arrays
//so do not use that

// for(int i = 0; i < 20; i++) {
//     cin >> name[i];
// }
    return 0;
}