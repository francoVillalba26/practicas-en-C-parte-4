#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int cuentaLetras(string);

int main(){
	string str;
	int cont;
	
	cout << "Ingrese una cadena de caracteres: ";
	getline(cin, str);
	
	cont = cuentaLetras(str);
	
	cout << "La cadena introducida posee " << cont << " letras." << endl;
	cout << "La cadena introducida posee " << str.length() << " caracteres." << endl;

	return 0;
}

int cuentaLetras(string str){
	int i=0;
	int cont= 0;
	
	try {
		while(true){
			if(isprint(str.at(i))){
				if(isalpha(str.at(i))){
					cont++;	
				}              
				i++;
			}
		}
	}
	catch(...){   
	}             
	 
	return cont;
}
