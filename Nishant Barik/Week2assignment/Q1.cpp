#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            res++;
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the number to check occurrences for: ";
    cin >> x;

    int occurrences = countOccurrences(arr, n, x);
    cout << "Number of occurrences of " << x << ": " << occurrences << endl;

    return 0;
}
