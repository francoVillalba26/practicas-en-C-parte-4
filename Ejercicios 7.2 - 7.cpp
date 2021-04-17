#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	char caracter;
	
	cout << "Ingrese una cadena de caracteres: ";
	getline(cin, str);
	
	cout << "Ahora ingrese un solo caracter: ";
	cin >> caracter;
	
	int size = str.length();
//	int j = size-1;
	
	int cont;
	for(int i=0; i<size; i++){
		if(str.at(i)==caracter){
			cont++;
		}
	}
	
	cout << "El caracter " << caracter << " se repite " << cont << " veces en la cadena." << endl;
	
	return 0;
}
