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



int main()
{
	//ejercicio01();
	//ejercicio02();
	//ejercicio03();
	//ejercicio04();
	//ejercicio05();
	//ejercicio06();
	//ejercicio07();
	//ejercicio08();
	//ejercicio09();
	//ejercicio10();
	//ejercicio11();
	ejercicio12();
}

void ejercicio01() {
	int n[5];
	int *punteroN = n;
	
	//Ingresar 5 numeros por teclado y almacenarlos en el arreglo utilizando punteros
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN+i);
	}

	//Imprimnir los 5 numeros almacenados en el arreglo utilizando punteros
	for (int i = 0; i < 5; i++) {
		cout << "Numero " << i+1 << ": " << *(punteroN + i) << endl;
	}
}

void ejercicio02() {
	int n[10];
	int* punteroN = n;

	//Ingresar 10 numeros por teclado y almacenarlos en el arreglo utilizando punteros
	for (int i = 0; i < 10; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
	}
	//Imprimnir los pares
	for (int i = 0; i < 10; i++) {
		if (*(punteroN + i) % 2 == 0) {
			cout << "Numero " << i + 1 << ": " << *(punteroN + i) << endl;
		}
	}
}

void ejercicio03() {
	int tamano = 0;
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> tamano;

	int *punteroN = new int[tamano];
	int suma = 0;
	float promedio = 0;

	//Encontrar el promedio
	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
		suma += *(punteroN + i);
	}

	promedio = (float)suma / tamano;
	cout << "El promedio es: " << promedio << endl;

}

void ejercicio04() {
	int tamano = 0;
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> tamano;

	int* punteroN = new int[tamano];
	
	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
	}

	int mayor = *punteroN;
	int menor = *punteroN;
	for (int i = 1; i < tamano; i++) {
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
	int invertido[10];
	int *punteroInvertido = invertido;

	//Ingresar 10 numeros por teclado y almacenarlos en el arreglo utilizando punteros
	for (int i = 0; i < 10; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
	}
	for (int i = 9, y = 0; i >= 0; i--, y++)
	{
		*(punteroInvertido + y) = *(punteroN + i);
	}
	for(int i = 0; i < 10; i++) {
		cout << "Invertido " << i + 1 << ": " << *(punteroInvertido + i) << endl;
	}
	

}
void ejercicio06() {
	int n[10];
	int* punteroN = n;
	int positivos = 0, negativos = 0, ceros = 0;

	//Ingresar 10 numeros por teclado y almacenarlos en el arreglo utilizando punteros
	for (int i = 0; i < 10; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
	}

	for(int i = 0; i < 10; i++) {
		if (*(punteroN + i) > 0) {
			positivos++;
		}
		else if (*(punteroN + i) < 0) {
			negativos++;
		}
		else {
			ceros++;
		}
	}

	cout << "Cantidad de numeros positivos: " << positivos << endl;
	cout << "Cantidad de numeros negativos: " << negativos << endl;
	cout << "Cantidad de ceros: " << ceros << endl;

}
void ejercicio07() {
	int tamano = 0;
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> tamano;

	string *punteroNom = new string[tamano];

	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese un nombre: ";
		cin >> *(punteroNom + i);
	}

	string nombreMasLargo = *punteroNom;

	for (int i = 1; i < tamano; i++) {
		if ( (*(punteroNom + i)).length() > nombreMasLargo.length()) {
			nombreMasLargo = *(punteroNom + i);
		}
	}

	cout << "El nombre mas largo es: " << nombreMasLargo << endl;

}
void ejercicio08() {
	int n[5];
	int* punteroN = n;

	//Ingresar 5 numeros por teclado y almacenarlos en el arreglo utilizando punteros
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
	}

	//ordernarlos de menor a mayor
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (*(punteroN + j) > *(punteroN + j + 1)) {
				int temp = *(punteroN + j);
				*(punteroN + j) = *(punteroN + j + 1);
				*(punteroN + j + 1) = temp;
			}
		}
	}

	//Imprimnir los 5 numeros almacenados en el arreglo utilizando punteros
	for (int i = 0; i < 5; i++) {
		cout << "Numero " << i + 1 << ": " << *(punteroN + i) << endl;
	}
}
void ejercicio09() {
	int tamano = 0;
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> tamano;

	int* punteroN = new int[tamano];

	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
	}

	int* sinDuplicar = new int[tamano];
	int tope = 0;

	for (int i = 0; i < tamano; i++) {
		bool duplicado = false;

		for(int j = 0; j < tope; j++) {
			if (*(punteroN + i) == *(sinDuplicar + j)) {
				duplicado = true;
				break;
			}
		}
		if (!duplicado) {
			*(sinDuplicar + tope) = *(punteroN + i);
			tope++;
		}
	}

	for (int i = 0; i < tope; i++) {
		cout << "Sin duplicar " << i + 1 << ": " << *(sinDuplicar + i) << endl;
	}

}
void ejercicio10() {
	int tamano = 0;
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> tamano;

	int* punteroN = new int[tamano];

	for (int i = 0; i < tamano; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
	}

	int *pares = new int[tamano];
	int topePares = 0;
	
	int *impares = new int[tamano];
	int topeImpares = 0;

	for (int i = 0; i < tamano; i++) {
		if (*(punteroN + i) % 2 == 0) {
			*(pares + topePares) = *(punteroN + i);
			topePares++;
		}
		else {
			*(impares + topeImpares) = *(punteroN + i);
			topeImpares++;
		}
	}

	for (int i = 0; i < topePares; i++) {
		cout << "Par " << i + 1 << ": " << *(pares + i) << endl;
	}

	for(int i = 0; i < topeImpares; i++) {
		cout << "Impar " << i + 1 << ": " << *(impares + i) << endl;
	}

}
void ejercicio11() {
	int  arreglo1[5];
	int* punteroArreg1 = arreglo1;

	//Ingresar 5 numeros por teclado y almacenarlos en el arreglo utilizando punteros
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un numero arreglo 1: ";
		cin >> *(punteroArreg1 + i);
	}

	int  arreglo2[5];
	int* punteroArreg2 = arreglo2;

	//Ingresar 5 numeros por teclado y almacenarlos en el arreglo utilizando punteros
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un numero arrgelo 2: ";
		cin >> *(punteroArreg2 + i);
	}

	int  suma[5];
	int* punteroSuma = suma;

	for (int i = 0; i < 5; i++) {
		*(punteroSuma + i) = *(punteroArreg1 + i) + *(punteroArreg2 + i);
	}

	//imprimoo el arreglo suma
	for (int i = 0; i < 5; i++) {
		cout << "Suma " << i + 1 << ": " << *(punteroSuma + i) << endl;
	}
}
void ejercicio12() {
	int n[5];
	int* punteroN = n;

	//Ingresar 5 numeros por teclado y almacenarlos en el arreglo utilizando punteros
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un numero: ";
		cin >> *(punteroN + i);
	}

	//ordernarlos de menor a mayor
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (*(punteroN + j) > *(punteroN + j + 1)) {
				int temp = *(punteroN + j);
				*(punteroN + j) = *(punteroN + j + 1);
				*(punteroN + j + 1) = temp;
			}
		}
	}

	//impirmir el arrelgo ordenado
	for (int i = 0; i < 5; i++) {
		cout << "Numero " << i + 1 << ": " << *(punteroN + i) << endl;
	}

	int numBuscar = 0;
	cout << "Ingrese un numero para bbuscar: ";
	cin >> numBuscar;

	for (int i = 0; i < 5; i++) {
		if (*(punteroN + i) == numBuscar) {
			cout << "El numero " << numBuscar << " se encuentra en la posicion " << i  << endl;
			return;
		}
	}
	cout << "El numero " << numBuscar << " no existe "<< endl;
}
