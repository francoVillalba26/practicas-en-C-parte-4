#include <iostream>
using namespace std;

int entero(double);
double partFrac(double);

int main()
{
	double num;
	
	cout << "Introduzca un numero: ";
	cin >> num;
	
	cout << "La parte fraccionaria del numero introducido es: " << partFrac(num) << endl;
	
	return 0;	
}

int entero(double a)
{
	int b = a;
	
	return b;
}

double partFrac(double a)
{
	double b = a - entero(a);
	
	return b;
}
