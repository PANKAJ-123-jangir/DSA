#include<iostream>
using namespace std;
void spiral(int arr[][3],int row,int col){
    int endingRow=row-1,endingCol=col-1;
    int count=0,startingRow=0,startingCol=0;
    int total=row*col;
    while(count<total){
        for(int index=startingCol;index<=endingCol && count<total;index++){
            cout<<arr[startingRow][index]<<" ";
            count++;       
        }
        startingRow++;
        for(int index=startingRow;index<=endingRow && count<total;index++){
            cout<<arr[index][endingCol]<<" ";
            count++;
        }
        endingCol--;
        for(int index=endingCol;index>=startingCol && count<total;index--){
            cout<<arr[endingRow][index]<<" ";
            count++;
        }
        endingRow--;
        for(int index=endingRow;index>=startingRow && count<total;index--){
            cout<<arr[index][startingCol]<<" ";
            count++;
        }
        startingCol++; 
    }
    

}
int main()
{
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    spiral(arr,3,3);               

    return 0;
}