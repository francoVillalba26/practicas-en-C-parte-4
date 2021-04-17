#include <iostream>
using namespace std;

void numalea(double, double&);

int main()
{
	double sem, numero;
	int i;
	
	cout << "Introduzca un numero semilla: ";
	cin >> sem;
	cout << "Este programa genera 10 numeros aleatorios: " << endl << endl;
		
	for(i = 1; i <= 10; i++)
	{
		numalea(sem, numero);
			
		cout << "--> " << numero << endl;
			
		sem = numero;
	}	
	
	return 0;
}

void numalea(double numSem, double& numAlea)
{
	int i;
	
	i = int (997.0 * numSem / 1e6);
	numAlea = 997.0 * numSem - i * 1e6;
	
	return;
}
