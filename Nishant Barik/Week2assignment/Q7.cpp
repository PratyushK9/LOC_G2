#include <iostream>
using namespace std;

// Function to shift all negative elements to the left
void shiftAll(int arr[], int left, int right) {
    while (left <= right) {
        if (arr[left] < 0 && arr[right] < 0) {
            left++;
        } else if (arr[left] > 0 && arr[right] < 0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        } else {
            right--;
        }
    }
}

// Function to display the array
void display(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    shiftAll(arr, 0, n - 1);
    cout << "Rearranged array: ";
    display(arr, n);

    return 0;
}
