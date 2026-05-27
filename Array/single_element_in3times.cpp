//an array contain all elements present exactly 3 times 
//except one find that one element
//1--> find the 1's count for each bit [32bit]
//array=2,2,2,5
//010
//010
//010
//101
//131        -->count
//find modulo of each bit by 3
//000----131
//000----101  ---> modulo by 3
//then convert this into decimal number which is our answer
#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int uniqueNumber = 0;  // Final unique number

    // Loop over each bit position (0 to 31)
    for (int bit = 0; bit < 32; bit++) {
        int bitCount = 0;

        // Count how many numbers have this bit set
        for (int i = 0; i < n; i++) {
            if ((arr[i] & (1 << bit)) != 0) {
                bitCount++;  // increment count if bit is 1
            }
        }

        // If bitCount % 3 != 0, this bit belongs to the unique number
        if (bitCount % 3 != 0) {
            int mask = 1 << bit;          // Create a mask for this bit
            uniqueNumber = uniqueNumber | mask; // Set the bit in result
        }
    }

    return uniqueNumber;
}

int main() {
    int arr[] = {6, 1, 3, 3, 3, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    int unique = findUnique(arr, n);

    cout << "The unique element is: " << unique << endl;

    return 0;
}
