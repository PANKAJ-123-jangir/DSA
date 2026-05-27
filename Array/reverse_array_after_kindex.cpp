#include<iostream>
#include<vector>
using namespace std;
vector<int>rev(vector<int>vec,int m){
    int s=m+1,e=vec.size()-1;
    while(s<e){
        swap(vec[s],vec[e]);
        s++;
        e--;
    }
    return vec;
}
void print(vector<int>vec){
    for(int x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{   
    int n;
    cout<<"enter the number of elements you want to enter"<<endl;
    cin>>n;
    vector<int>vec;
    cout<<"enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int m;
    cout<<"enter after how many index you want the array to be reversed"<<endl;
    cin>>m;
    cout<<"orinal array :"<<endl;
    print(vec);
    vector<int>ans=rev(vec,m);
    cout<<"array after :"<<endl;
    print(ans);
    return 0;
}