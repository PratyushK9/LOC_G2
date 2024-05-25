#include <iostream>
using namespace std;

const int MAX_SIZE = 10000; 

int mostFrequent(int arr[], int n) {
    int freq[MAX_SIZE] = {0}; 

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; 
    }

    int maxCount = 0;
    int mostOccurred = -1;

    for (int i = 0; i < MAX_SIZE; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            mostOccurred = i;
        }
    }

    return mostOccurred;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = mostFrequent(arr, n);
    if (result != -1)
        cout << "Most occurred element is: " << result << endl;
    else
        cout << "No elements in the array." << endl;

    return 0;
}
