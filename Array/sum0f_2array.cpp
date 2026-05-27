//add two arrays like addition and display the resultant array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>result(int arr1[],int n,int arr2[],int m){
    int i=n-1,j=m-1;
    vector<int>vec;
    int carry=0;
    
    while(i>=0 && j>=0){
        int val1=arr1[i],val2=arr2[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        vec.push_back(sum);
        i--,j--;
    }
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        vec.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        vec.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        vec.push_back(sum);
    }
    reverse(vec.begin(),vec.end());
    return vec;
}
int main(){
    int arr1[]={6,7,8,9,1};
    int arr2[]={5,6,7};
    vector<int>ve=result(arr1,5,arr2,3);
    for(int x:ve){
       cout<<x<<" ";
    }
    return 0;
}