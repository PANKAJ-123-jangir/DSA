#include<iostream>
#include<vector>
using namespace std;

//function to print the vector elements
void print(vector<int>vec){
    for(int x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
}

//function takes the vector and return the vector
vector<int>reverse(vector<int>vec){
    int s=0,e=vec.size()-1;
    while(s<=e){
        swap(vec[s],vec[e]);
        s++;
        e--;
    }
    return vec;
}

int main()
{   
    int n;
    cout<<"enter the number of elements you want to enter"<<endl;
    cin>>n;
    vector<int>v;

    //vector input from user
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"original array :"<<endl;
    print(v);
    cout<<"reversed array:"<<endl;
    vector<int>ans=reverse(v);
    print(ans);
    return 0;
}