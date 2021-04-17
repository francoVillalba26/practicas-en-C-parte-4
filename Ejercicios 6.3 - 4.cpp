#include <iostream>
using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main()
{
	int dolar, cien, cincuenta;
	int veinte, diez, cinco, uno;
	
	cout << "Introduzca una cantidad de dinero en dolares: ";
	cin >> dolar;
	
	cambio(dolar, cien, cincuenta, veinte, diez, cinco, uno);
	
	cout << "El valor de " << dolar << " en dolares se puede obtener con:" << endl
	     << "--> " << cien << " billetes de cien dolares." << endl
	     << "--> " << cincuenta << " billetes de cincuenta dolares." << endl
	     << "--> " << veinte << " billetes de veinte dolares." << endl
	     << "--> " << diez << " billetes de diez dolares." << endl
	     << "--> " << cinco << " billetes de cinco dolares." << endl
	     << "--> " << uno << " billetes de un dolar." << endl;
	
	return 0;
}

void cambio(int dol, int& cien, int& cin, int& vein, int& diez, int& cinco, int& uno)
{
	cien = (dol / 100);
	
	cin = ((dol - cien * 100)/50);
	
	vein = ((dol - cien * 100 - cin * 50)/20);

	diez = ((dol - cien * 100 - cin * 50 - vein * 20)/10);
	
	cinco = ((dol - cien * 100 - cin * 50 - vein * 20 - diez * 10)/5);
	
	uno = (dol - cien * 100 - cin * 50 - vein * 20 - diez * 10 - cinco * 5);
	
	return; 
}
