// Sesion02.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

void ejercicio01();
void ejercicio02();
void ejercicio03();
void ejercicio04();
void ejercicio05();
void ejercicio06();
void ejercicio07();
void ejercicio08();
void ejercicio09();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();


int main()
{
	//ejercicio01();
	//ejercicio02();
	//ejercicio03();
	//ejercicio04();
	//ejercicio05();
	//ejercicio06();
	ejercicio07();
	//ejercicio08();
	//ejercicio09();
	//ejercicio10();
	//ejercicio11();
	//ejercicio12();
	//ejercicio13();
	//ejercicio14();
	//ejercicio15();
}

void ejercicio01() {
	int n[5];
	int * punteroN = n;
	cout << "Ingrese 5 numeros enteros: " << endl;

	for (int i = 0; i < 5; i++) {
		cin >> *(punteroN + i);
	}

	for (int i = 0; i < 5; i++) {
		cout << "Numero " << i << ": " << *(punteroN + i) << endl;
	}

}
void ejercicio02() {
	int n[10];
	int* punteroN = n;
	cout << "Ingrese 10 numeros enteros: " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> *(punteroN + i);
	}

	cout << "Los pares : " << endl;

	for (int i = 0; i < 10; i++) {
		if (*(punteroN + i) % 2 == 0) {
			cout << *(punteroN + i) << endl;
		}
		
	}

}
void ejercicio03() {
	int tamano = 0;
	cout << "Ingrese el tamaño del arreglo: " << endl;
	cin >> tamano;

	float *calificaciones = new float[tamano];
	float *punteroCal = calificaciones;
	float suma = 0;

	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese la calificacion " << i + 1 << ": " << endl;
		cin >> *(punteroCal + i);
		suma += *(punteroCal + i);
	}

	cout << "El promedio es: " << suma / tamano << endl;
}
void ejercicio04() {
	int tamano = 0;
	cout << "Ingrese el tamaño del arreglo: " << endl;
	cin >> tamano;

	int *n = new int[tamano];
	int *punteroN = n;

	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese los valores de N " << i + 1 << ": " << endl;
		cin >> *(punteroN + i);
	}

	int mayor = *punteroN;
	int menor = *punteroN;

	for (int i = 0; i < tamano; i++) {
		if (*(punteroN + i) > mayor) {
			mayor = *(punteroN + i);
		}
		if (*(punteroN + i) < menor) {
			menor = *(punteroN + i);
		}
	}

	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
}

void ejercicio05() {
	int n[10];
	int *punteroN = n;
	int invertidos[10];
	int *punteroInv = invertidos;

	cout << "Ingrese 10 numeros enteros: " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> *(punteroN + i);
	}

	int c = 0;
	for (int i = 9; i >=0 ; i--) {
		*(punteroInv + c) = *(punteroN + i);
		c++;
	}

	for (int i = 0; i < 10; i++) {
		cout << "Invertido " << i << ": " << *(punteroInv + i) << endl;
	}

}
void ejercicio06() {
	int n[10];
	int *punteroN = n;
	cout << "Ingrese 10 numeros enteros: " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> *(punteroN + i);
	}

	int contPositivos = 0;
	int contNegativos = 0;
	int contCeros = 0;
	for (int i = 0; i < 10; i++) {
		if (*(punteroN + i) > 0) {
			contPositivos++;
		}
		else if (*(punteroN + i) < 0) {
			contNegativos++;
		}
		else {
			contCeros++;
		}
	}

	cout << "Cantidad de numeros positivos: " << contPositivos << endl;
	cout << "Cantidad de numeros negativos: " << contNegativos << endl;
	cout << "Cantidad de ceros: " << contCeros << endl;


}
void ejercicio07() {
	int tamano = 0;
	cout << "Ingrese el tamaño del arreglo: " << endl;
	cin >> tamano;

	string *nombres = new string[tamano];
	string *punteroNombres = nombres;

	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese el nombre " << i + 1 << ": " << endl;
		cin >> *(punteroNombres + i);
	}
	
	string nombreMayor = "";
	for (int i = 0; i < tamano; i++) {
		if ( (*(punteroNombres + i)).length() > nombreMayor.length()) {
			nombreMayor = *(punteroNombres + i);
		}
	}

	cout << "El nombre con mas caracteres es: " << nombreMayor << endl;
	delete[] nombres;

}
void ejercicio08() {

}
void ejercicio09() {

}
void ejercicio10() {

}
void ejercicio11() {

}
void ejercicio12() {

}
void ejercicio13() {

}
void ejercicio14() {

}
void ejercicio15() {

}
