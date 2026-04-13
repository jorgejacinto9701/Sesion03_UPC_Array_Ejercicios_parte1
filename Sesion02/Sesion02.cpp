// Sesion02.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int n[10] = { 7, 6, 5, 9, 2, 1, 4, 5};

	//La suma de elementos
	int suma = 0;
	for (int i = 0; i < 8; i++) {
		suma += n[i];
	}
	cout << "La suma de los elementos es: " << suma << endl;
	//El promedio
	cout << "El promedio es: " << (suma / 8.0) << endl;

	//La suma de pares
	int sumaPares = 0;
	for (int i = 0; i < 8; i++) {
		if (n[i] % 2 == 0) {
			sumaPares += n[i];
		}
	}
	cout << "La suma de los pares es: " << sumaPares << endl;

	//La suma de impares
	int sumaImpares = 0;
	for (int i = 0; i < 8; i++) {
		if (n[i] % 2 == 1) {
			sumaImpares += n[i];
		}
	}
	cout << "La suma de impares es: " << sumaImpares << endl;

	//El primer par
	int primerPar = -1;
	for (int i = 0; i < 8; i++) {
		if (n[i] % 2 == 0) {
			primerPar = n[i];
			break;
		}
	}
	cout << "El primer Par es: " << primerPar << endl;

	//El primer impar
	int primerImPar = -1;
	for (int i = 0; i < 8; i++) {
		if (n[i] % 2 == 1) {
			primerImPar = n[i];
			break;
		}
	}
	cout << "El primer ImPar es: " << primerImPar << endl;

	//El último par
	int ultimoPar = -1;
	for (int i = 7; i >=0 ; i--) {
		if (n[i] % 2 == 0) {
			ultimoPar = n[i];
			break;
		}
	}
	cout << "El ultimo Par es: " << ultimoPar << endl;

	//El último impar
	int ultimoImpar = -1;
	for (int i = 7; i >= 0; i--) {
		if (n[i] % 2 == 1) {
			ultimoImpar = n[i];
			break;
		}
	}
	cout << "El ultimo Impar es: " << ultimoImpar << endl;

	//El mayor
	int mayor = n[0];
	for (int i = 1; i < 8; i++) {
		if (n[i] > mayor) {
			mayor = n[i];
		}
	}
	cout << "El mayor: " << mayor << endl;

	
	//El menor
	int menor = n[0];
	for (int i = 1; i < 8; i++) {
		if (n[i] < menor){
			menor = n[i];
		}
	}
	cout << "El menor: " << menor << endl;

	//El mayor par
	int mayorPar = 0;
	int c = 0;
	
	for (int i = 0; i < 8; i++) {
		if (n[i] % 2 == 0) {
			c ++;
			if (c == 1) {
				mayorPar = n[i];
			}else{
				if (n[i] > mayorPar) {
					mayorPar = n[i];
				}
			}
		}
	}
	cout << "El mayor Par: " << mayorPar << endl;

	//El menor par
	int menorPar = 0;
	int c2 = 0;

	for (int i = 0; i < 8; i++) {
		if (n[i] % 2 == 0) {
			c2++;
			if (c2 == 1) {
				menorPar = n[i];
			}
			else {
				if (n[i] < menorPar) {
					menorPar = n[i];
				}
			}
		}
	}
	cout << "El menor Par: " << menorPar << endl;

	//El segundo mayor
	int segundoMayor = n[0];
	for (int i = 1; i < 8; i++) {
		if (n[i] != mayor &&  n[i] > segundoMayor) {
			segundoMayor = n[i];
		}
	}
	cout << "El segundo mayor: " << segundoMayor << endl;

	//El segundo menor
	int segundoMenor = n[0];
	for (int i = 1; i < 8; i++) {
		if (n[i] != menor && n[i] < segundoMenor) {
			segundoMenor = n[i];
		}
	}
	cout << "El segundo menor: " << segundoMenor << endl;

	//El segundo mayor par
	//El segundo menor par
}
