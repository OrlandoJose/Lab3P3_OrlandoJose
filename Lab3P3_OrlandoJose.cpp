#include <iostream>
#include <locale>
#include <vector>
#include <cstdlib> 
using namespace std;
void imprimir(int filas,int columnas,char** c) {
	for (int i = 0;i < filas;i++) {
		for (int j = 0;j < columnas;j++) {
			if (i == 0 && j == 0 || i == filas - 1 && j == columnas - 1 || i == 0 && j == columnas - 1 || i == filas - 1 && j == 0) {
				cout << " " << c[i][j] << " ";
			}
			else if (i == 0 || i == filas - 1 || j == 0 || j == columnas - 1 || i == (filas / 2) && j == (columnas / 2)) {
				cout << "[" << c[i][j] << "]";
			}
			else
				cout << "   ";

		}
		cout << endl;
	}
}
void matriz() {
	char estrella = '*';
	int filas, columnas;
	cout << "Ingrese el tamano del acelerador en la simulacion(numero impar entre 5 y 15):";
	cin >> filas;
	while (filas%2==0||filas<5||filas>15) {
		cout << "Ingrese el tamano del acelerador en la simulacion(numero impar entre 5 y 15):";
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
				c[i][j] = estrella;
			}
			else if (i==filas/2&&j==columnas/2) {
				c[i][j] == '-';
			}
			else {
				c[i][j] = ' ';
			}
		}
	}
	int X = 0;
	int Z = 0;
	imprimir(filas, columnas, c);
		cout << endl;
		int opcion = 1;
		int velocidad = 0;
		cout << "Velocidad actual: " << velocidad << " u/s"<<endl;
		while (opcion!=4) {
			cout << "1.Agregar Velocidad" << endl;
			cout << "2.Quitar Velocidad" << endl;
			cout << "3.Continuar" << endl;
			cout << "4.Detener y Salir" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> opcion;
			switch (opcion) {
				case 1:{
					cout << "Cuanta velocidad quieres aumentar:" << endl;
					cin >> velocidad;
					break;}
				case 2: {
					int reducir = 0;
					cout << "Cuanta velocidad desea reducir: " << endl;
					cin >> reducir;
					velocidad = velocidad - reducir;
					break;
				}
				case 3: {
					int X1 = X;
					int Z1 = Z;
					for (int i = 0;i < velocidad;i++) {

						if (Z1 == 0) {
							c[X][Z] = ' ';
							c[X1 ++][Z1] = '*';
							X = X1++;
							Z = Z1 ;
							imprimir(filas, columnas, c);
						}
						else if (X1 == filas - 1) {
							c[X][Z] = ' ';
							c[X1][Z1++] = '*';
							X = X1;
							Z = Z1++;

							imprimir(filas, columnas, c);
						}
						else if (Z1 == filas - 1) {
							c[X][Z] = ' ';
							c[X1++][Z1] = '*';
							X = X1 ++;
							Z = Z1;
							imprimir(filas, columnas, c);
						}

						else if (X1 == filas - 1) {
							c[X][Z] = ' ';
							c[X1 ++][Z1] = '*';
							X = X1 ++;
							Z = Z1;

							imprimir(filas, columnas, c);
						}
						else if (X1 == columnas - 1 && Z1 == filas - 1) {
							c[X][Z] = ' ';
							c[X1][Z1--] = '*';
							X = X1;
							Z = Z1 --;

							imprimir(filas, columnas, c);
						}
						else if (X1 == filas - 1) {
							c[X][Z] = ' ';
							c[X1][Z1 ++] = '*';
							X = X1;
							Z = Z1 ++;
							imprimir(filas, columnas, c);
						}
						else if (Z1 == 0) {
							c[X][Z] = ' ';
							c[X1 --][Z1] = '*';
							X = X1 --;
							Z = Z1;
							imprimir(filas, columnas, c);
						}
					}
				}break;
				case 4: {
					system("cls");
					break;
				}
			}
		}
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++)
				delete[] c[j];
			delete[] c[i];

		}
		delete[] c;
}
void cubo() {
	int X;
	int Y;
	int Z;
	cout << "Ingrese el tamano del tesaracto en la simulacion(numero par entre 5 y 15):";
	cin >> X;
	while (X % 2 == 0 || X < 5 || X>15) {
		cout << "Ingrese el tamano del tesaracto en la simulacion(numero par entre 5 y 15):";
		cin >> X;
	}
	Y = X;
	Z = X;
	char*** c = new char** [X];
	for (int i = 0; i < X; i++) {
		c[i] = new char* [Y];
		for (int j = 0; j < Y; j++)
			c[i][j] = new char[Z];
	}

	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++) {
			for (int k = 0; k < Z; k++) {
				c[0][j][k] = '*';
				c[X - 1][j][k] = '*';
			}
		}
	}
	//imprimir
	int contador = 1;
	for (int i = 0; i < X; i++) {
		cout << "Fase" << i << ":" << endl;
		for (int j = 0; j < Y; j++) {
			for (int k = 0; k < Z; k++) {
				contador++;				
				cout << " "<<c[i][j][k]<<" ";

			}
			cout << endl;
		}
		
	}

}
void Genoma() {
	int tamaño;
	cout << "Ingrese el tamaño de la cadena de ADN en la simulacion(numero par entre mayor a 20)"<<endl;
	cin >> tamaño;
	while (tamaño%2==1|| tamaño % 2 == 0&&tamaño<20) {
		cout << "Ingrese el tamaño de la cadena de ADN en la simulacion(numero par entre mayor a 20)" << endl;
	}
	
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
			cout << "BIENVENIDO EL ACELERADOR DE PARTICULAS" << endl;;
			while (opcion) {
				matriz();
			}
			break;}
		case 2: {
			cout << "BIENVENIDO A EL TESERACTO SIMULADO" << endl;
			cubo();
			break;
		}
		case 3: {
			cout << "BIENVENIDO A EL SIMULADOR DE CADENAS DE GENOMA" << endl;
			Genoma();
			break;
		}
		}
	}

}
