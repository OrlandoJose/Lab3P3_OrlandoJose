#include <iostream>
#include <locale>
#include <vector>
using namespace std;
void matriz() {
	char estrella = '*';
	int filas, columnas;
	cout << "Ingrese el tamaño del acelerador en la simulacion(numero par entre 5 y 15):";
	cin >> filas;
	while (filas%2==1||filas<5||filas>15) {
		cout << "Ingrese el tamaño del acelerador en la simulacion(numero par entre 5 y 15):";
		cin >> filas;
	}
	columnas = filas;
	char** c = new char* [filas];
	for (int i = 0; i < filas; i++) {
		c[i] = new char[filas];
	}
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (i==0&&j==0) {
				c[i][j] = '°';
			}
		}
	}
}
void imprimir(int F, int C, char m[][]) {
	for (int j = 0;j < F;j++) {
		for (int k = 0;k < C;k++) {
			if (i==0||j==0||) {
				cout << "[" << m[j][k] << "]";
			}
			
		}
		cout << endl;
	}
}
int main()
{
	int opcion = 1;
	while (opcion) {
		cout << "|°°°|°°°|°°°|°°°|°°°|°°°MENU°°°|°°°|°°°|°°°|°°°|°°°|";
		cout << "1.-Acelerador de Particulas" << endl;
		cout << "2.-Teseracto Simulado" << endl;
		cout << "3.-Simulador de Cadenas de Genoma" << endl;
		cout << "0.-Salir" << endl;
		cout << "Ingrese una opcion:" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1: {
			cout <<"BIENVENIDO EL ACELERADOR DE PARTICULAS";
			while (opcion) {
				matriz();
			}
			break;}
		case 2: {

			break;
		}
		case 3: {

			break;
		}
		}
	}

}
