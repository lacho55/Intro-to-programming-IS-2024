#include <iostream>
using namespace std;

// Функция за създаване на нов масив с половината елементи
int* createHalfArray(int* arr, int size) {
    // Нов размер на масива е половината от оригиналния
    int newSize = size / 2;
    // Създаваме нов масив динамично
    int* newArr = new int[newSize];
    
    // Копираме първата половина от елементите
    for (int i = 0; i < newSize; i++) {
        newArr[i] = arr[i];
    }
    
    // Връщаме указател към новия масив
    return newArr;
}

int main() {
    // Примерен входен масив
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6; // Размер на оригиналния масив
    
    // Извикваме функцията и получаваме новия масив
    int* halfArr = createHalfArray(arr, size);
    
    // Отпечатваме елементите на новия масив
    cout << "Новият масив с половината елементи: ";
    for (int i = 0; i < size / 2; i++) {
        cout << halfArr[i] << " ";
    }
    cout << endl;
    
    // Освобождаваме паметта на новия масив
    delete[] halfArr;
    
    return 0;
}
