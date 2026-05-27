//all elements are present single time execpt 1 duplicate elemenst
//size=5  -->1,2,3,4,2
//if array size is n then it contain elemnts from 1 to n-1 unique elements except 1 elements
#include<iostream>
using namespace std;
int duplicate(int array[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
       ans=ans^array[i];
    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main()
{   int size=5;
    int arr[5]={1,2,3,4,2};
    cout<<"duplicate element is :"<<duplicate(arr,size);
    return 0;
}