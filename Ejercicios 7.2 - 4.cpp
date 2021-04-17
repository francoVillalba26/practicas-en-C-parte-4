#include <iostream>
#include <string>
using namespace std;

int main(){
	string str = "Contar el numero de vocales";
	int i, numChars;
	int contVoc;
	int contVocA = 0;
	int contVocE = 0;
	int contVocI = 0;
	int contVocO = 0;
	int contVocU = 0;
	
	cout << "La cadena: " << str << endl;
	
	numChars = int(str.length());
	for(i=0; i<numChars; i++){
		switch(str.at(i)){
			case 'a':
				contVocA++;
				break;
			case 'e':
				contVocE++;
				break;
			case 'i':
				contVocI++;
				break;
			case 'o':
				contVocO++;
				break;
			case 'u':
				contVocU++;
				break;
		}
    }
    
    cout << "tiene:\n"; 
	cout << contVocA << " vocales a." << endl
	     << contVocE << " vocales e." << endl
	     << contVocI << " vocales i." << endl
	     << contVocO << " vocales o." << endl
	     << contVocU << " vocales u." << endl;
	
	return 0;
}
