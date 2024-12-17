#include <iostream>
using namespace std;

void reverseString(char str[]) {
    int start = 0, end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--; // Move to the last character

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    reverseString(str);

    cout << "Reversed string: " << str << endl;
    return 0;
}