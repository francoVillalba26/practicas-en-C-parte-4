#include <iostream>
#include <string>
#include <stdlib.h> // para que funcione atoi
using namespace std;

int main(){
	bool isvalidInt(string);   // prototipo de la funcion (declaracion)
	string valor;
	int num;
	
	cout << "Introduzca un numero entero: ";
	getline(cin, valor);
	
	while(!isvalidInt(valor)){
		cout << "\nEl numero que introdujo no es un numero entero valido.\n" << endl;
		cout << "Introduzca un numero entero: ";
		getline(cin, valor);
	}
	
	num = atoi(valor.c_str());
	cout << "El numero entero que introdujo es: " << num;
	
	/*if(!isvalidInt(valor)){
		cout << "El numero que introdujo no es un numero entero valido.";
	}
	else{
		num = atoi(valor.c_str());
		cout << "El numero entero que introdujo es: " << num;
	}*/
	
	return 0;
}

bool isvalidInt(string str){
	int inicio = 0;
	int i;
	bool valido = true;   //asume un numero valido
	bool signo = false;   //asume que no es signo
	
	//comprueba una cadena vacia
	if(int(str.length()) == 0) valido = false;
	
	//comprueba un signo a la izquierda
	if(str.at(0)=='-' || str.at(0)=='+'){
		signo = true;
		inicio = 1;   //comienza a comprobar los digitos despues del signo
	}
	
	//comprueba que hay al menos un caracter despues del signo
	if(signo && int(str.length()==1)) valido = false;
	
	//ahora comprueba la cadena, la cual sabemos que tiene al menos un
	//caracter que no es un signo
	i = inicio;
	while(valido && i<int(str.length())){
		if(!isdigit(str.at(i))) valido = false;   //encuentra un caracter
		                                             //que no es un digito
		i++;   // se mueve al siguiente caracter
	}
	
	return valido;
}
