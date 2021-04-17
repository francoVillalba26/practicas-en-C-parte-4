#include <iostream>
using namespace std;

int bisiesto(int);

int main()
{
	int num, year;
	
	cout << "Introduzca el año: ";
	cin >> num;
	
	year = bisiesto(num);
	
	if (year == 1){
		cout << "El año " << num << " es bisiesto.";
	}
	else{
		cout << "El año " << num << " no es bisiesto.";
	}
	
	return 0;
}

int bisiesto(int year)
{
	float a, b, c;
	int d;
	
	a = year/400;
	b = year/4;
	c = year/100;
	
	if (a-int(a)==0.00){
	    d = 1;
    }
	else if ((b-int(b))==0.00 && c-int(c)>0.00){
	    d = 1;
	}
	else{
	    d = 0;
	}
	
	return d;
}

