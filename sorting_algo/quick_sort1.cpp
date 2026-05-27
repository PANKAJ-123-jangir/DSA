#include<iostream>
#include<stack>
using namespace std;

// Partition function
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while(true){
        while(i <= high && arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;

        if(i >= j) break;

        swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

// Iterative QuickSort
void quickSort(int arr[], int low, int high){
    stack<int> st;

    st.push(low);
    st.push(high);

    while(!st.empty()){
        high = st.top(); st.pop();
        low = st.top(); st.pop();

        int p = partition(arr, low, high);

        // Left side
        if(p - 1 > low){
            st.push(low);
            st.push(p - 1);
        }

        // Right side
        if(p + 1 < high){
            st.push(p + 1);
            st.push(high);
        }
    }
}

int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}