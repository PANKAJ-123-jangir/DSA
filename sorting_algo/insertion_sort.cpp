//we assume the arr[o] element i to be sorted
//then ieterate from i=1(because arr[o] is sorted) to i<n using for loop
//temp=arr[i]
//j=i-1
//while loop used condition(j>=0 && arr[j]>temp)
//then shift array j to j+1 place means arr[j+1]=arr[j]
//now arr[j+1]=temp
//after that repeat all steps again  for i=2( assume sorted array index 0 and 1  )   
#include<iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
      arr[j+1]=temp;      
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int array[6]={3,1,5,2,7,6};
    cout<<"after sorting"<<endl;
    insertion(array,6);
    return 0;
}