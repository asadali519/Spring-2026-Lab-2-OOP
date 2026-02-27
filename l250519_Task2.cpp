//Asad Ali
//25l-0519


# include <iostream>
using namespace std;

int main() {
	int x, y, z;

	cout << "Enter x: ";
	cin >> x;

	cout << "Enter y: ";
	cin >> y;

	cout << "Enter z: ";
	cin >> z;

	//pointer to constant integer: cannot modify value of x using ptrX
	const int* ptrX = &x;

	//the pointer can point to another integer so VALID
	ptrX = &y;
	cout << "Pointer changed to another variable: " << *ptrX << endl;;

	//the pointer cannot be dereferenced to change saved value in integer, so INVALID 
	//*ptrX = 20;
	
	//constant pointer to integer
	int* const ptrY = &y;

	//pointer cannot be used to pint to another integer, so INVALID
	//ptrY = &x;

	//pointer can be used to change the value insode the varibale being pointed
	*ptrY = 50;
	cout << "Value changed using dereferencing: " << *ptrY;

	//constant pointer to constant integer
	int const* const ptrZ = &z;

	//pointer cannot be used to point to another value
	//ptrZ = &x;

	//pointer cannot be used to change value by dereferencing
	//*ptrZ = 100;



	return 0;
}