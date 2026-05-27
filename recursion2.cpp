#include<iostream>
using namespace std;
 void reachHome(int st,int dest){
    cout<<" source "<<st<<" Destinatin "<<dest <<endl;
    if(st==dest){
        cout<<"ghar aa gaya"<<endl;
        return;
    }
    st++;
    reachHome(st,dest);

}
int main()
{   
    int st=1;
    int dest=20;
    reachHome(st,dest);
    return 0;
}