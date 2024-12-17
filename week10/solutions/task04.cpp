#include <iostream>
using namespace std;

void copyString(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string
}

int main() {
    char source[100], destination[100];

    cout << "Enter the source string: ";
    cin.getline(source, 100);

    copyString(destination, source);

    cout << "Copied string: " << destination << endl;
    return 0;
}