#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str, aux;
	int i, j, k, size;
	
	for(i=0; i<5; i++){
		cout << "Ingrese su nombre y despues su apellido: ";
		getline(cin, str);
		cout << "Se desplegara su apellido y despues su nombre: ";
		size = str.length();/*
		for(j=0; j<size; j++){
			if(isspace(str.at(i))){
				
			}
		}*/
		
		j = str.find(" ");
		aux = str.substr(j+1,size);
		aux = aux + " " + str.erase(j);
		cout << aux << endl;
	}
	return 0;
}
