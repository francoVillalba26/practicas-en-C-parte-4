#include <iostream>
#include <string>
using namespace std;

int main(){
	string mensaje;    //declara un objeto string
	
	cout << "Introduzca una cadena:\n";
	
	getline(cin, mensaje);
	
	cout << "La cadena que se acaba de introducir es:\n"
	     << mensaje << endl;
	
	return 0;
}
