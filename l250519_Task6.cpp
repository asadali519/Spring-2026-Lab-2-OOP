//Asad Ali
//25l-0519

#include <iostream>
using namespace std;

void printMatrix(int rows, int cols, int** matrix);
void SumMaxMin(int rows, int cols, int** matrix);
void input(int rows, int cols, int** matrix);

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        *(matrix + i) = new int[cols];
    }

    input(rows, cols, matrix);
    printMatrix(rows, cols, matrix);
    SumMaxMin(rows, cols, matrix);
  


    for (int i = 0; i < rows; i++) {
        delete[] * (matrix + i);
    }
    delete[] matrix;

    return 0;
}

void printMatrix(int rows, int cols, int** matrix) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(*(matrix + i) + j) << " ";
        }
        cout << endl;
    }
}
void SumMaxMin(int rows, int cols, int** matrix) {
 
    int sum = 0;
    int max = *(*(matrix + 0) + 0);
    int min = *(*(matrix + 0) + 0);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = *(*(matrix + i) + j);
            sum = sum + index;

            if (index > max) {
                max = index;
            }
            if (index < min) {
                min = index;
            }
        }
    }

    cout << "Total Sum of Elements: " << sum << endl;
    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;

}
void input(int rows, int cols, int** matrix) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> *(*(matrix + i) + j);
        }
    }
    cout << endl;
}