#include <iostream>
using namespace std;

void tiempo(int, int&, int&, int&);

int main()
{
	int time, hora, min, seg;
	
	cout << "Introduzca una cantidad de dinero en dolares: ";
	cin >> time;
	
	tiempo(time, hora, min, seg);
	
	cout << "El valor de " << time << " en segundos se escribe como:" << endl
	     << "--> " << hora << " horas." << endl
	     << "--> " << min << " minutos." << endl
	     << "--> " << seg << " segundos" << endl;
	
	return 0;
}

void tiempo(int time, int& h, int& m, int& s)
{
	h = (time / 3600);
	
	m = ((time - h * 3600)/60);
	
	s = (time - h * 3600 - m * 60);
	
	return; 
}
