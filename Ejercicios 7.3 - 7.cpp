#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str;
	char e;
	
	cout << "Introduzca una cadena de caracteres: ";
	getline(cin, str);
	int size = str.length();
	
	cout << "La cadena introducida en hexadecimal es: ";
	
	for(int i=0; i<size; i++){
		cout << hex << int (str.at(i));
	}
	
	return 0;
}
