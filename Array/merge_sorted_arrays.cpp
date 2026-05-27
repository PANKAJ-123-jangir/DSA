//---------using vector------------

#include<iostream>
#include<vector>
using namespace std;

void printarr(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

void merge_arr(const vector<int>& arr1, int n,
               const vector<int>& arr2, int m,
               vector<int>& arr3) {
    
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n) {
        arr3[k++] = arr1[i++];
    }

    while (j < m) {
        arr3[k++] = arr2[j++];
    }
}

int main() {
    vector<int> arr1 = {3, 5, 6, 9, 12};
    vector<int> arr2 = {1, 4, 10, 13};

    vector<int> arr3(arr1.size() + arr2.size());

    merge_arr(arr1, arr1.size(), arr2, arr2.size(), arr3);

    cout << "Merged array:" << endl;
    printarr(arr3);

    return 0;
}

//--------------this is basic using array---------

// #include<iostream>
// using namespace std;

// void printarr(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void merge_arr(int arr1[], int n, int arr2[], int m, int arr3[]) {
//     int i = 0, j = 0, k = 0;

//     while (i < n && j < m) {
//         if (arr1[i] > arr2[j]) {
//             arr3[k++] = arr2[j++];
//         } else {
//             arr3[k++] = arr1[i++];
//         }
//     }

//     while (i < n) {
//         arr3[k++] = arr1[i++];
//     }

//     while (j < m) {
//         arr3[k++] = arr2[j++];
//     }
// }

// int main() {
//     int arr1[5] = {3,5,6,9,12};
//     int arr2[4] = {1,4,10,13};
//     int arr3[9];

//     merge_arr(arr1, 5, arr2, 4, arr3);

//     cout << "Merged array:" << endl;
//     printarr(arr3, 9);

//     return 0;
// }
