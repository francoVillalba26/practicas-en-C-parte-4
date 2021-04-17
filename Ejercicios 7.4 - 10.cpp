#include <iostream>
#include <string>
#include <stdlib.h> // para que funcione atoi
using namespace std;

int main()
{
	int getanInt();   //declaracion de funcion (prototipo)
	int valor;
	
	cout << "Introduzca un valor entero: ";
	valor = getanInt();
	cout << "El numero entero introducido es: " << valor << endl;
	
	return 0;
}

int getanInt(){
	bool isvalidInt(string);   //declaracion de funcion (prototipo)
	bool notanint = true;
	string segundo_valor;
	
	while(notanint){
		try{
			getline(cin, segundo_valor);   //acepta una entrada de cadena
			if(!isvalidInt(segundo_valor)) throw segundo_valor;
		}
		catch(string e){
			cout << "Numero entero invalido - Por favor reintroduzca: ";
			continue;   //envia el control a la instruccion while
		}
		notanint = false;
	}
	return atoi(segundo_valor.c_str());   //convierte en un numero entero
}

bool isvalidInt(string str){
	int inicio = 0;
	int i;
	bool valido = true;   //asume un numero valido
	bool signo = false;   //asume que no es signo
	string aux;
	
	int size = str.length();
	for(int i=0; i<size; i++){
		if(isspace(str.at(i))){
			aux = str.substr((i+1),size);
			str.erase(i);
			str.insert(i,aux);
			size = str.length();
			cout << str << endl;
			i--;
		}
	}
	cout << "La cadena queda: " << str << endl;
	
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
