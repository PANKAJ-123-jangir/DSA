
#include<iostream>
#include<bitset>
using namespace std;
int main()
{                 //method 1 short
   // int n;
   // cout<<"enter a negative number"<<endl; 
    //cin>>n;
    //cout<<bitset<8>(n)<<endl; //binary of no directly by(bitset)
    
    int x;
    cout << "Enter a number: ";
    cin >> x;

    unsigned int n = (unsigned char)x;   // force 8-bit two's complement

    cout << "Binary (8-bit two's complement): ";

    for (int i = 7; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }

    return 0;
}
