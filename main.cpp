// ID: 10661943
// Description: Program to perform Linear Search
#include <iostream>

using namespace std;

int linSearch(int array[], int numOfElem, int k) {
    if (numOfElem < 0) {
    return -1;
    }
    else if (array[numOfElem] == k) {
        return numOfElem;
    }
    else {
        return linSearch(array, numOfElem - 1, k);
    }
}

int main() {
    int size, i;
    cout << "Enter the array size: ";
    cin>>size;
    int arr[size], k;

    for (int y = 0; y < size; y++) {
        cout<<"Enter item "<< y + 1<<": ";
        cin>>arr[y];
    }
    cout<<"Enter the value to search: ";
    cin>>k;

    i = linSearch(arr, size, k);

    if(i == -1) {
        cout<<"Item not found";
    } else {
        cout<<"Item found";
    }
    return 0;
}
