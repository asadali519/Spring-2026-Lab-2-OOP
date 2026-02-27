////Asad Ali
////25l-0519
//
//
//#include <iostream>
//
//using namespace std;
//
//int findMax(int* arr, int size);
//
//int main() {
//    int n;
//    cout << "Enter the Size of Array: ";
//    cin >> n;
//
//    
//    int* arr = new int[n];
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter Element " << i + 1 << ": ";
//        cin >> *(arr + i);
//    }
//
//    int max = findMax(arr, n);
//    cout << "The maximum element is: " << max << endl;
//
//    delete[] arr; 
//
//    return 0;
//}
//
//
//int findMax(int* arr, int size) {
//    int max = *(arr + 0);
//  
//    for (int* ptr = arr; ptr < arr + size; ptr++) {
//        if (*ptr > max) {
//            max = *ptr;
//        }
//    }
//
//    return max;
//}
