#include <iostream>
#include <string>
using namespace std;

int main(){
	string str = "Contar el numero de vocales";
	int i, numChars;
	int contVoc = 0;
	
	cout << "La cadena: " << str << endl;
	
	numChars = int(str.length());
	for(i=0;i<numChars;i++){
		switch(str.at(i)){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				contVoc++;
		}
    }
    
    cout << "tiene " << contVoc << " vocales." << endl;
	
	return 0;
}
