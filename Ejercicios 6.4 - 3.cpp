#include <iostream>
using namespace std;

void flujo(double, double, double, double&, double&);

int main()
{
	double diam, visc, dens, vel_lam, vel_tur;
	
	cout << "Introduzca la viscosidad del fluido: ";
	cin >> visc;
	
	cout << "Introduzca la densidad del fluido: ";
	cin >> dens;
	
	cout << "Introduzca el diametro del tubo: ";
	cin >> diam;
	
	flujo(visc, dens, diam, vel_lam, vel_tur);
	
	cout << "\nLa velocidad del liquido que produce un flujo laminar es " << vel_lam << endl;
	cout << "La velocidad del liquido que produce un flujo turbulento es " << vel_tur << endl;
	
	return 0;
}

void flujo(double visco, double densi, double diamo, double& veLam, double& velTur)
{
	veLam = (2100 * visco) / (densi * diamo);
	velTur = (4000 * visco) / (densi * diamo);
	
	return;
}
