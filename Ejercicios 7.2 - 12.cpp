#include <iostream>
#include <string>
using namespace std;

int main(){
	string str, car, rem;
	int i, size, size1, size2;
	int j;
	
	cout << "Introduzca una frase: ";
	getline(cin, str);
	size = str.length();
	
	cout << "Introduzca los caracteres que desea reemplazar: ";
	getline(cin, car);
	cout << "Introduzca los caracteres de reemplazo: ";
	getline(cin, rem);
	size1 = car.length();
	size2 = rem.length();
	
	for(i=0; i<size; i++){
		if(str.at(i)==car.at(0)){
			str.replace(i,size1,rem);
		}
    }
    
    //str.replace(j,size1,rem);
    
    cout << "La frase modificada es: " << str << endl;
	
	return 0;
}
