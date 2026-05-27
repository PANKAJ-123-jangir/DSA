#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row =matrix.size(),col=matrix[0].size();
    int count =0,total=row*col;
    int r=0,c=col-1;
    while(r<row && c >=0 ){
        int element=matrix[r][c];
        if(element==target){
             cout<<"[row][col] :["<<r<<"] ["<<c<<"]"<<endl;
            return true;
        }
        else if (element<target){
           r++;
        }
        else{
            c--;
        }
    }
    return false;
     
}
int main(){
    vector<vector<int>>v={{1, 4, 7, 11,15},
                          {2, 5, 8, 12,19},
                          {3, 6, 9, 16,22},
                          {10,13,14,17,24},
                          {18,21,23,26,30}};
    int target =30;
    cout<<searchMatrix(v,target);
    return 0;
}