#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

void numDado(int&, int&, double, double);

int main()
{
	int dado1, dado2, opcion, suma, i;
	double apuesta, pen, pre, rval1, rval2;
			
	cout << "¡Bienvenido al juego de apuestas con dados!\n" << endl
	     << "Elija el modo de juego:" << endl
	     << "--> Oprima 1 para modo clasico.(2 dados)" << endl
	     << "--> Oprima 2 para modo muerte subita.(2 dados)" << endl
	     << "--> Oprima 3 para modo interminable.(2 dados)" << endl
	     << "--> Oprima cualquier otro numero para salir." << endl;
	cin >> opcion;
	
	srand(time(NULL));
	if(opcion == 1)
	{
		cout << "Ha seleccionado el modo clasico.\n" << endl;
		
		cout << "Las reglas son las siguientes:" << endl
		     << "1) Cuenta con cinco lanzamientos iniciales." << endl
		     << "2) Introduce su apuesta." << endl
		     << "3) Si la suma de ambos dados es 7 se suma un quinto del valor apostado." << endl
		     << "4) Si la suma de ambos dados es 11 no se penaliza." << endl
		     << "5) Si la suma de ambos dados es otro numero se resta un quinto del valor." << endl;    
		cout << endl;
		
		cout << "Introduzca su apuesta: ";
		cin >> apuesta;
		pen = apuesta * 0.8;
		pre = apuesta * 1.2;
		
		for(i = 1; i <= 5;)
		{
	        rval1 = double(rand())/RAND_MAX;
	        rval2 = double(rand())/RAND_MAX;
			numDado(dado1, dado2, rval1, rval2);
			suma = dado1 + dado2;
			
			if(suma == 7)
			{
				apuesta = apuesta + pre;
				i++;
			}
			else if(suma == 11)
			{
				i++;
			}
			else
			{
				apuesta = apuesta - pen;
				i++;
			}
			rval1 = 0;
			rval2 = 0;
		}
		
		cout << "El dinero restante de sus apuestas es: " << apuesta << endl;
	}
	else if(opcion == 2)
	{
		cout << "Ha seleccionado el modo muerte subita.\n" << endl;
		
		cout << "Las reglas son las siguientes:" << endl
		     << "1) Cuenta con tres lanzamientos." << endl
		     << "2) Introduce su apuesta." << endl
		     << "3) Si la suma es 7 o 11 se duplica su apuesta y termina el juego." << endl
		     << "5) Si la suma es otro numero se resta el total de la apuesta." << endl;    
		cout << endl;
		
		cout << "Introduzca su apuesta: ";
		cin >> apuesta;
		pre = apuesta;
		
		for(i = 1; i <= 3;)
		{
	        rval1 = double(rand())/RAND_MAX;
	        rval2 = double(rand())/RAND_MAX;
			numDado(dado1, dado2, rval1, rval2);
			suma = dado1 + dado2;
			
			if(suma == 7 || suma == 11)
			{
				apuesta = pre * 2;
				i = i + 4;
			}
			else
			{
				apuesta = 0;
				i++;
			}
		}
		
		cout << "El dinero restante de sus apuestas es: " << apuesta << endl;
	}
	else if(opcion == 3)
	{
		cout << "Ha seleccionado el modo interminable.\n" << endl;
		
		cout << "Las reglas son las siguientes:" << endl
		     << "1) Cuenta lanzamientos indefinidos." << endl
		     << "2) Introduce su apuesta." << endl
		     << "3) Si la suma es 7 o 11 se suman 30 a la apuesta." << endl
		     << "5) Si la suma es otro numero se resta 15 a la apuesta." << endl
			 << "6) El juego termina cuando la apuesta es cero." << endl
			 << "7) El juego termina por voluntad del usuario." << endl
			 << "8) El juego termina cuando la suma es igual a 4." << endl;    
		cout << endl;
		
		cout << "Introduzca su apuesta: ";
		cin >> apuesta;
		pre = apuesta;
		
		do
		{
	        rval1 = double(rand())/RAND_MAX;
	        rval2 = double(rand())/RAND_MAX;
			numDado(dado1, dado2, rval1, rval2);
			suma = dado1 + dado2;
			
			if(suma == 4 || apuesta < 0)
			{
				break;
			}
			else if(suma == 7 || suma == 11)
			{
				apuesta = apuesta + 30;
			}
			else
			{
				apuesta = apuesta - 15;
			}
			
		} while(1);
		
		cout << "El dinero restante de sus apuestas es: " << apuesta << endl;
	}
	else
	{
		cout << "¡Hasta luego!" << endl;
	}
	
	return 0;
}

void numDado(int& val1, int& val2, double ranval1, double ranval2)
{
	
	val1 = (int)(6.0 * ranval1 + 1);
	val2 = (int)(6.0 * ranval2 + 1);
	
	cout << "El valor del dado 1 es " << val1 << endl
	     << "El valor del dado 2 es " << val2 << endl;
	
	return;
}
