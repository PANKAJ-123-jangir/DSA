// #include<iostream>
// using namespace std;
// int main()
// {   
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int binary[8];
//     for(int i=0;i<8;i++){
//         binary[i]=n%2;
//         n=n/2;
//     }
//     cout<<"binary of the "<<n<<" is:"<<endl;
//     for(int i=7;i>=0;i--){
//         cout<<binary[i];
//     }
//     return 0;
// }
// more optimized
#include <iostream>
using namespace std;

void printBinary(int n)
{
    for(int i = 31; i >= 0; i--)   // 32-bit integer
        cout << ((n >> i) & 1);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    printBinary(n);
    return 0;
}
