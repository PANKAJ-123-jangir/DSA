#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m) {
    int i = n - 1;        // last valid element of arr1
    int j = m - 1;        // last element of arr2
    int k = n + m - 1;    // last index of arr1

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }

    // Copy remaining elements of arr2 (if any)
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[6] = {1, 3, 5, 0, 0, 0};
    int arr2[3] = {2, 4, 6};

    merge(arr1, 3, arr2, 3);

    cout << "Merged array:" << endl;
    print(arr1, 6);

    return 0;
}
