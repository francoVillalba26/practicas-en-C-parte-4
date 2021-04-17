#include <iostream>
using namespace std;

void encontrarMax(int, int, int&);

int main()
{
	int primernum, segundonum, max;
	
	cout << "\nIntroduzca un numero: ";
    cin >> primernum;
    cout << "¡Estupendo! Por favor introduzca un segundo numero: ";
    cin >> segundonum;
    
    encontrarMax(primernum, segundonum, max);
    
    cout << "\nEl maximo de los dos numeros es " << max << endl;
    
    return 0;
}

void encontrarMax(int x, int y, int& max)
{
	if(x >= y)
	 max = x;
	else
	 max = y;
    
    return;
}
