#include <iostream>
using namespace std;

int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "The length of the string is: " << stringLength(str) << endl;
    return 0;
}