////Asad Ali
////25l-0519
//
//#include <iostream>
//using namespace std;
//
//void resizeArray(int*& arr, int& currentSize, int newSize);
//void printArray(int* arr, int size);
//
//int main() {
//    int initialSize;
//    cout << "Enter initial size of the array: ";
//    cin >> initialSize;
//    if (initialSize <= 0) {
//        cout << "Initial size must be positive." << endl;
//        return 1;
//    }
//    int* dynamicArray = new int[initialSize];
//    int currentSize = initialSize;
//
//    for (int i = 0; i < currentSize; i++) {
//        cout << "Element " << i + 1 << ": ";
//        cin >> *(dynamicArray + i);
//    }
//    int choice, newSize;
//    cout << "Enter Choice: ";
//    
//
//    cout << "1 for Grow \n2 for Shrink \n3 to Exit" << endl;
//
//    cin >> choice;
//
//    if (choice == 1) {
//        cout << "Enter new larger size: ";
//        cin >> newSize;
//        if (newSize > currentSize) {
//            resizeArray(dynamicArray, currentSize, newSize);
//        }
//        else {
//            cout << "New size must be larger than the current size to grow." << endl;
//        }
//    }
//    else if (choice == 2) {
//        cout << "Enter new smaller size: ";
//        cin >> newSize;
//        if (newSize < currentSize && newSize > 0) {
//            resizeArray(dynamicArray, currentSize, newSize);
//        }
//        else {
//            cout << "New size must be smaller than the current size and positive to shrink." << endl;
//        }
//    }
//    else if (choice == 3) {
//        cout << "Printed Array: " << endl;
//        printArray(dynamicArray, currentSize);
//    }
//    else if (choice == 4) {
//        delete[] dynamicArray;
//        return 0;
//    }
//
//    return 0;
//}
//
//void resizeArray(int*& arr, int& currentSize, int newSize) {
//    if (newSize <= 0) {
//        cout << "New size must be positive." << endl;
//        return;
//    }
//    int elementsToCopy = 0;
//    int* newArr = new int[newSize];
//    if (currentSize < newSize) {
//        elementsToCopy = currentSize;
//    }
//    else if (newSize < currentSize) {
//        elementsToCopy = newSize;
//    }
//
//    for (int i = 0; i < elementsToCopy; i++) {
//        *(newArr + i) = *(arr + i);
//    }
//    if (newSize > currentSize) {
//        cout << "Enter " << newSize - currentSize << " new integer elements:" << endl;
//        for (int i = currentSize; i < newSize; i++) {
//            cout << "Element [" << i + 1 << "]: ";
//            cin >> *(newArr + i);
//        }
//        cout << endl;
//    }
//    delete[] arr;
//    arr = newArr;
//    currentSize = newSize;
//    cout << "Array successfully resized to " << currentSize << " elements." << endl;
//
//    cout << "Printed Array: " << endl;
//    printArray(newArr, currentSize);
//}
//
//void printArray(int* arr, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << *(arr + i) << " ";
//    }
//    cout << endl;
//}