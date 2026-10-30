#include <iostream>
#include <locale>
#include <vector>
using namespace std;
void matriz() {
	char estrella = '*';
	int filas, columnas;
	cout << "Ingrese el tamano del acelerador en la simulacion(numero par entre 5 y 15):";
	cin >> filas;
	while (filas%2==0||filas<5||filas>15) {
		cout << "Ingrese el tamano del acelerador en la simulacion(numero par entre 5 y 15):";
		cin >> filas;
	}
	columnas = filas;
	//reservo
	char** c = new char* [filas];
	for (int i = 0; i < filas; i++) {
		c[i] = new char[columnas];
	}
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (i==0&&j==0) {
				c[i][j] = '*';
			}
			else if (i==filas/2&&j==columnas/2) {
				c[i][j] == '+';
			}
			else {
				c[i][j] = ' ';
			}
		}
	}
	//imprimo
	for (int i = 0;i < filas;i++) {
		for (int j = 0;j < columnas;j++) {
			if (i == 0 || i == filas - 1 || j == 0 || j == columnas -1) {
				cout << "[" << c[i][j] << "]";
			}
			else if (i == 0 && j == 0 || i == filas - 1 && j == columnas - 1 || i == 0 && j == columnas - 1 || i == filas - 1 && j == 0) {
				cout << " " << c[i][j] << " ";
			}

		}
		cout << endl;
	}
		cout << endl;
		int opcion = 1;
		int velocidad = 0;
		cout << "Velocidad actual: " << velocidad << "u/s"<<endl;
		while (opcion!=4) {
			cout << "1.Agregar Velocidad" << endl;
			cout << "2.Quitar Velocidad" << endl;
			cout << "3.Continuar" << endl;
			cout << "4.Detener y Salir" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> opcion;
			switch (opcion) {
				case 1:{

					break;}
				case 2: {

					break;
				}
				case 3: {

				}break;
				case 4: {

					break;
				}
			}
		}
	
}
void cubo() {

}
int main()
{
	int opcion = 1;
	while (opcion) {
		cout << "MENU" << endl;
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
