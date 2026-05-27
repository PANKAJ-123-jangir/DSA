#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int first =1,second=2;
    cout<<first<<" "<<second<<" ";
for (int i = 2; i < n; i++)
{
    int next= first + second;
    cout<<next<<" ";
    first=second;
    second=next;
}
return 0;

}