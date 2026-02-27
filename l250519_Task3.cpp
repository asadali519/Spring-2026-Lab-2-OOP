//Asad Ali
//25l-0519

#include <iostream>
using namespace std;

float calculateAverage(const float* arr, int size)
{
   float sum = 0, average = 0;
   for (int i = 0; i < size; i++) {
       sum += *(arr + i);
   }
   average = sum / size;

   return average;
}

int main() {
   int n;
   cout << "Enter total Elements: ";
   cin >> n;

   float* array = new float[n];

   for (int i = 0; i < n; i++) {
       cout << "Enter element " << i + 1 << ": ";
       cin >> *(array + i);
   }

   float avg = calculateAverage(array, n);

   cout << "Average of elements: " << avg << endl;

   delete[] array;
   array = nullptr;

   return 0;
}