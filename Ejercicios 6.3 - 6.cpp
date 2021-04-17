#include <iostream>
using namespace std;

void calc_years(int, int&, int&, int&);

int main()
{
	int cantDias, year, mes, dia;
	
	cout << "Introduzca la cantidad de dias: ";
	cin >> cantDias;
	
	calc_years(cantDias, year, mes, dia);
	
	cout << "\nLa fecha introducida es: " 
	     << dia << "/" << mes << "/" << year << endl;
	
	return 0;
}

void calc_years(int day, int& y, int& m, int& d)
{
	int ano = int(day / 365);
	int months = int ((day - ano * 365)/30);
	int days = int (day - ano * 365 - months * 30);
	
	y = 1990 + ano;
	m = months;
	d = days;
	
	return;
}
