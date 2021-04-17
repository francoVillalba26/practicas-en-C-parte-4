#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int i, size;
	
	cout << "Escriba una frase: ";
	getline(cin, str);
	size = str.length();
	
	for(i=0;i<size;i++){
		if(str.at(i)=='e'){
			str.replace(i,1,"x");
		}
    }
    
    cout << "\nSe ha reemplazado la letra e por la letra x en la frase insertada\n" << endl;
    cout << "La frase modificada es: " << str;
	
	return 0;
}
