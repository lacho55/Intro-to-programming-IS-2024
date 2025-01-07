#include <iostream>
#include <cstring>

// Task 0: Sum of digits
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

// Task 1: String length
int recStrlen(const char* str) {
    if (*str == '\\0') {
        return 0;
    }
    return 1 + recStrlen(str + 1);
}

// Task 2: Reverse an integer
int reverseHelper(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }
    return reverseHelper(n / 10, reversed * 10 + (n % 10));
}

int reverse(int n) {
    return reverseHelper(n, 0);
}

// Task 3: Factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Task 4: Check if two strings are equal
bool areEqual(char* str1, char* str2) {
    if (*str1 == '\\0' && *str2 == '\\0') {
        return true;
    }
    if (*str1 != *str2) {
        return false;
    }
    return areEqual(str1 + 1, str2 + 1);
}

// Task 5: Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Task 6: Find minimum in array
int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    int restMin = findMin(arr + 1, size - 1);
    return (arr[0] < restMin) ? arr[0] : restMin;
}

// Task 7: Decimal to binary
void toBinary(int n) {
    if (n == 0) {
        return;
    }
    toBinary(n / 2);
    std::cout << (n % 2);
}

// Task 8: Count lowercase, uppercase, and digits
void evaluate(const char* str, int& lowerCase, int& upperCase, int& digits) {
    if (*str == '\\0') {
        return;
    }
    if (*str >= 'a' && *str <= 'z') {
        lowerCase++;
    } else if (*str >= 'A' && *str <= 'Z') {
        upperCase++;
    } else if (*str >= '0' && *str <= '9') {
        digits++;
    }
    evaluate(str + 1, lowerCase, upperCase, digits);
}

// Task 9: Swap case
bool swapcase(char* str) {
    if (*str == '\\0') {
        return true;
    }
    if (*str >= 'a' && *str <= 'z') {
        *str = *str - ('a' - 'A');
    } else if (*str >= 'A' && *str <= 'Z') {
        *str = *str + ('a' - 'A');
    }
    return swapcase(str + 1);
}

int main() {
    // Task 0 example
    std::cout << "Sum of digits (154): " << sumOfDigits(154) << "\\n";

    // Task 1 example
    std::cout << "String length (\"Happy new year\"): " << recStrlen("Happy new year") << "\\n";

    // Task 2 example
    std::cout << "Reversed number (1123): " << reverse(1123) << "\\n";

    // Task 3 example
    std::cout << "Factorial (5): " << factorial(5) << "\\n";

    // Task 4 example
    std::cout << "Are strings equal (\"Hello\", \"Hello\"): " << (areEqual("Hello", "Hello") ? "true" : "false") << "\\n";

    // Task 5 example
    std::cout << "Fibonacci (5): " << fibonacci(5) << "\\n";

    // Task 6 example
    int arr[] = {10, 15, 4, 15, 16};
    std::cout << "Minimum in array: " << findMin(arr, 5) << "\\n";

    // Task 7 example
    std::cout << "Binary of 5: ";
    toBinary(5);
    std::cout << "\\n";

    // Task 8 example
    int lowerCase = 0, upperCase = 0, digits = 0;
    evaluate("3 Doors Down", lowerCase, upperCase, digits);
    std::cout << "Lowercase: " << lowerCase << ", Uppercase: " << upperCase << ", Digits: " << digits << "\\n";

    // Task 9 example
    char str[] = "Yellow Submarine";
    swapcase(str);
    std::cout << "Swapcase: " << str << "\\n";

    return 0;
}