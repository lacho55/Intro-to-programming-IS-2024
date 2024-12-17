#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100); // Read the string including spaces
    cout << "You entered: " << str << endl;
    return 0;
}