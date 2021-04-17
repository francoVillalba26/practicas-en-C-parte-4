#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string str;
	
	cout << "Ingrese una cadena de caracteres: ";
	getline(cin, str);
	int size = str.length();
	
	for(int i=0; i<size; i++){
		if(!isspace(str.at(i))){
			cout << str.at(i);
		}
		else{
			cout << endl;
		}
	}
	
	return 0;
}
