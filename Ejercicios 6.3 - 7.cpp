#include <iostream>
using namespace std;

void tiempo(int&, int&);

int main()
{
	int min, hora;
	
	cout << "Introduzca dos numeros: ";
	cin >> min >> hora; 
	tiempo(min, hora);
	
	return 0;
}

void tiempo(int& min, int& hora)
{
	int seg;
	
	seg = (hora * 60 + min) * 60;
	cout << "El numero total de segundos es " << seg << endl;
	
	return;
}
