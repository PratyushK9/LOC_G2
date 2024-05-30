#include <iostream>
using namespace std;


int countoccurrences(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number to count its occurrences: ";
    cin >> num;

    int count = countoccurrences(arr, n, num);
    cout << "occurance of  " << num << " : " << count <<  endl;

    return 0;
}