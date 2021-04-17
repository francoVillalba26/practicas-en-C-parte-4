#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int i, size;
	
	cout << "Ingrese una frase: ";
	getline(cin, str);
	
	size = str.length();
	int j = size-1;
	
	cout << "La frase introducida al reves es: ";
	
	for(i=j; i>=0; i--) {
		cout << str.at(i);
    }
	
	cout << endl;
	
	return 0;
}
