#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int alphabets = 0;
    int digits = 0;
    int specialChars = 0;

    for (int i = 0; i < str.length(); ++i) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabets++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else {
            specialChars++;
        }
    }

    cout << "Number of alphabets: " << alphabets << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of special characters: " << specialChars << endl;

    return 0;
}