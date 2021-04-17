#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str;
	char carac;
	int i, size;
	int cont=0;
	
	cout << "Ingrese una cadena caracteres: ";
	getline(cin, str);
	size = str.length();
	
	for(i=0; i<size; i++){
		carac = str.at(i);
		if(isspace(carac)){
			cont++;
		}
	}
	
	if(cont == 0){
		cout << "La cadena ingresada no posee palabras." << endl;
	}
	else{
		cout << "La cadena ingresada posee " << cont+1 << " palabras." << endl;
	}
	
	return 0;
}
