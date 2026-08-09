#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    // Finding mid this way prevents integer overflow for very large numbers
    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        // Go to right part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        // Go to left part
        else {
            end = mid - 1;
        }

        // Update mid for the next iteration
        mid = start + (end - start) / 2;
    }
    
    // Return -1 if the key is not found
    return -1;
}

int main() {
  

    int n;
    cout << "\nEnter size of your own array: ";
    cin >> n;

    int myArr[100]; // Assuming max size 100 for simplicity
    cout << "Enter " << n << " sorted elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> myArr[i];
    }

    int myKey;
    cout << "Enter the key to search: ";
    cin >> myKey;

    int myIndex = binarySearch(myArr, n, myKey);
    
    if(myIndex == -1) {
        cout << "Key not found." << endl;
    } else {
        cout << "Key found at index: " << myIndex << endl;
    }

    return 0;
}