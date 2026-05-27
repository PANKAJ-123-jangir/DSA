#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<vector<int>>v,int key){
    int row=v.size();
    int col=v[0].size();
    int s=0,e=row*col-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int valueMid=v[mid/col][mid%col];
        if(valueMid==key){
            cout<<"[row][col]=["<<mid/col<<"]["<<mid%col<<"]"<<endl;
            cout<<"index of the key is:";
            return mid;
        }
        if(valueMid<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    } 
    return 0;
}
int main(){
    int key=12;
    vector<vector<int>>vec={{1,2,3},{5,7,8},{9,12,43}};
    int ans= binarySearch(vec,key);
    cout<<ans;
    return 0;
}