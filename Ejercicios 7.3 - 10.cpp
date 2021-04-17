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
		if(i==0){
			cout << char (toupper(str.at(i)));
		}
		else if(isupper(str.at(i))){
			if(str.at(i-2)=='.'){
				cout << str.at(i);
			}
			else{
				cout << char (tolower(str.at(i)));
			}
		}
		else if(str.at(i)=='.'){
			if(isspace(str.at(i+1))){
				cout << ".";
			}
			else{
				cout << ". ";
			}
		}
		else if(str.at(i-1)=='.'){
			cout << char (toupper(str.at(i)));
		}
		else{
			cout << str.at(i);
		}
	}
	
	return 0;
}
