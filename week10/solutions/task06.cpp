#include <iostream>
using namespace std;

int compareStrings(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]); // Compare remaining characters or null terminator
}

int main() {
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    int result = compareStrings(str1, str2);

    if (result == 0)
        cout << "The strings are equal." << endl;
    else if (result > 0)
        cout << "The first string is greater." << endl;
    else
        cout << "The second string is greater." << endl;

    return 0;
}