#include <iostream>
using namespace std;

int countVowels(const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int vowels = countVowels(str);
    cout << "Number of vowels: " << vowels << endl;

    return 0;
}