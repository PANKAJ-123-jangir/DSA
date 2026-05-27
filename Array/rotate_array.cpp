#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>&arr,int k){
    vector<int>temp(arr.size());
    //we made the temp arr because the result will be overwrite when originl arr used
    for(int i=0;i<arr.size();i++){
        temp[(i+k)%arr.size()]=arr[i];
    }
    arr=temp;
    for(int x:arr){
        cout<<x<<" ";
    }
}
int main()
{   
    int k=3;
    vector<int>vec={1,2,3,4,5};
    rotate(vec,k);
    return 0;
}