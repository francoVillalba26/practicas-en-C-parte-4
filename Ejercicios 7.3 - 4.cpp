#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <cctype>
using namespace std;

int main(){
	time_t t;
	int i, num;
	
	cout << "Este programa genera 10 numeros aleatorios de 0 a 129" << endl;
	cout << "Si los numeros representan algun caracter imprime un mensaje.\n" << endl;
	
	srand((int) time(&t));    //Inicializacion, genera la semilla de rand con la funcion time.
	
	for(i=0; i<10; i++){
		num = rand() % 129;
		if(isupper(char(num))){
			cout << "El numero introducido es mayuscula: -" << char(num) << "-";
		}
		else if(islower(char(num))){
			cout << "El numero introducido es minuscula: -" << char(num) << "-";
		}
		else if(isdigit(char(num))){
			cout << "El numero introducido es un digito: -" << char(num) << "-";
		}
		else if(isspace(char(num))){
			cout << "El numero introducido es un espacio: -" << char(num) << "-";
		}
		else{
			cout << "El numero introducido es el caracter " << char(num) << " en codigo ASCII.";
		}
		cout << endl;
	}
	
	return 0;
}
