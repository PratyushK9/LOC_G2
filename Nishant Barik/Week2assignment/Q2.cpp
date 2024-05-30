#include <iostream>
using namespace std;

int main() {
    int size1, size2, size3;
    cout << "Enter the size for the first array: ";
    cin >> size1;
    cout << "Enter the size for the second array: ";
    cin >> size2;

    size3 = size1 + size2;
    cout << "Enter the elements in a sorted manner:";

    int array1[size1], array2[size2], array3[size3];
    for (int i = 0; i < size1; i++) {
        cin >> array1[i];
        array3[i] = array1[i];
    }

    int k = size1;
    cout << "Enter the elements in a sorted manner:";
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
        array3[k] = array2[i];
        k++;
    }

    cout << "Merged array of first and second:\n";
    for (int i = 0; i < size3; i++)
        cout << array3[i] << " ";

    cout << "\nSorted array in descending order:\n";
    for (int i = 0; i < size3; i++) {
        for (int j = i + 1; j < size3; j++) {
            if (array3[i] < array3[j]) {
                int temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }

    for (int i = 0; i < size3; i++) {
        cout << array3[i] << " ";
    }

    return 0;
}
