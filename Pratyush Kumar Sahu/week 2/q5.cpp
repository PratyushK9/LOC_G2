#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int new_arr[n];

    for (int i = 0; i < n; ++i) {
        new_arr[i] = arr[i];
    }

    cout << "Elements of the new array: ";
    for (int i = 0; i < n; ++i) {
        cout << new_arr[i] << " ";
    }
    cout << endl;

    return 0;
}