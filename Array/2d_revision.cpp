#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//to print row wise sum
void rowSum(vector<vector<int>>matrix, int m, int n){
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+matrix[i][j];
        }
        cout<<i+1<<" row sum :"<<sum<<endl;
    }
    cout<<endl;
}
//colmun wise sum
void colSum(vector<vector<int>>matrix, int m, int n){
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+matrix[i][j];
        }
        cout<<j+1<<" column sum :"<<sum<<endl;
    }
    cout<<endl;
}
// fn too find sum of all elemenst 2D array
int sumfn(vector<vector<int>>matrix, int m, int n){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=sum+matrix[i][j];
        }
    }
    return sum;
}
//to find maximum element in the matrix
int maxele(vector<vector<int>>matrix,int m, int n){
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]>max){
                max=matrix[i][j];
            }
        }
    }
    return max;  
}
//to find min element in the matrix 
int minEle(vector<vector<int>>matrix,int m, int n){
    int min=INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]<min){
                min=matrix[i][j];
            }
        }
    }
    return min;  
}
//count odd and even number in the matrix
void cntOddEven(vector<vector<int>>matrix,int m, int n){
    int oddCnt=0,evenCnt=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]%2==0){
                evenCnt++;
            }
            else{
                oddCnt++;
            }
        }
    }
    cout<<"total even numbers :"<<evenCnt<<endl;
    cout<<"total odd numbers :"<<oddCnt<<endl;

}
int DiagonalSum(vector<vector<int>>matrix,int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           if(i==j){
           sum=sum+matrix[i][j];
           }
        }  
    }
    return sum;
}
//check sqaure matrix
bool checkSquare(vector<vector<int>>matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    if(row==col){
        return true;
    }
    else{
        return false;
    }
}
void secondaryDiagonal(vector<vector<int>>v){
    int n=3;
    for(int i=0;i<n;i++){
        cout<<v[i][n-1-i]<<" ";
    }

}
int main(){
    vector<vector<int>>v={{1,2,3},
                          {4,5,6},
                          {7,8,9}};
    cout<<"sum of matrix :"<<sumfn(v,3,3)<<endl;
    rowSum(v,3,3);
    colSum(v,3,3);
    cout<<"sum of  diagonal of matrix :"<<DiagonalSum(v,3,3)<<endl;
    cout<<"maximum element in the matrix :"<<maxele(v,3,3)<<endl;
    cout<<"minimum element in the matrix :"<<minEle(v,3,3)<<endl;
    cntOddEven(v,3,3);
    cout<<"checking square matrix or not :"<<checkSquare(v)<<endl;;
    secondaryDiagonal(v);
    return 0;
}