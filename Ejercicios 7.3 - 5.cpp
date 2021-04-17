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
	
	cout << "La cadena introducida posee " << cont << " caracteres segun mi funcion." << endl;
	cout << "La cadena introducida posee " << str.length() << " caracteres segun la funcion lenght." << endl;

	return 0;
}

int cuentaLetras(string str){
	int i=0;
	int cont= 0;
	
	try {
		while(true){
			if(isprint(str.at(i))){    //Cuando str.at(i) llega a una posicion donde no existe un caracter,
				cont++;                //lanza una excepcion (error) y se interrumpe el ciclo.
				i++;
			}
		}
	}
	catch(...){   //catch agarra la excepcion lanzada y no hace nada, pero la ejecucion del programa continua.
	}             //Los tres puntos (...) representan un tipo de dato generico para cualquier excepcion.
	              //Para las excepciones de la funcion at() de la clase string se puede utilizar tambien como
	              //dato de excepcion la expresion "exception&" seguido de una variable: catch(exception& e).
	
	return cont;
}
