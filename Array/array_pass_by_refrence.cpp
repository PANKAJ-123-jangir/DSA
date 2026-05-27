#include <iostream>
using namespace std;

// Function to update a variable
void updateVariable(int x) {
    x = 50; 
    cout<<"value of a in function"<<x<<endl;  // changes only local copy
}

// Function to update an array
void updateArray(int arr[]) {
    arr[0] = 100;   // changes original array
}

int main() {
    int a = 10;
    int arr[3] = {1, 2, 3};

    // Call both functions
    updateVariable(a);
    updateArray(arr);

     // Output results
    cout << "Value of variable a in main: " << a << endl;

    cout << "Array elements in main: ";
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

