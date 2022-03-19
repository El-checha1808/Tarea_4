#include <iostream>

using namespace std;

void sumaArreglos();
bool numPrimo(int);

int main(){
	
	sumaArreglos();
	
	return 0;
}

void sumaArreglos(){
	
	int sel, filas, columnas, valor, sumatoria;
	
	cout << "Elija una opcion: " << endl;
	cout << "\n1. Crear vector de enteros Unidimensional" << endl;
	cout << "2. crear Vector de enteros Bidimensional" << endl;
	cout << "\n -> ";
	cin >> sel;
	
	if (sel == 1){
		
		cout << "\nCuantas posiciones desea agregar? " << endl;
		cin >> filas;
		cout << "" << endl;
		
		int numeros [filas];
		
		system("cls");
		
		for (int i = 0; i < filas; i++){
			
			cout << "Valor #" << i + 1 << " = ";
			cin >> valor;
			numeros[i] = valor;
		}
		
		system("cls");
		
		for (int i = 0; i < filas; i++){
			
			sumatoria += numeros[i];
		}
		
		cout << "\nLa suma de todos los valores ingresados es: " << sumatoria << endl;
		
		if (numPrimo(sumatoria) == 1){
			
			cout << "\nEl numero [" << sumatoria << "] es un numero primo" << endl;
			
		} else {
			
			cout << "\nEl numero [" << sumatoria << "] no es un numero primo" << endl;
		}
		
		cout << "\nVector de " << filas << " Posiciones y los valores agregados\n " << endl;
		
		for (int i = 0; i < filas; i++){
			
			cout << numeros[i] << " ";
		}
		
		 
		
	} else if (sel == 2){
		
		cout << "\nCuantas filas desea agregar? " << endl;
		cin >> filas;
		cout << "\nCuantas columnas desea agregar? " << endl;
		cin >> columnas;
		cout << "" << endl;
		
		int numeros[filas][columnas];
		
		system("cls");
		
		for (int i = 0; i < filas; i++){
			
			cout << "Fila #" << i + 1 << endl;
			
			for (int j = 0; j < columnas; j++){
				
				cout << "Valor #" << j + 1 << " = ";
				cin >> valor;
				numeros[i][j] = valor;

			}
		}
		
		system("cls");
		
		
		for (int i = 0; i < filas; i++){
			
			for (int j = 0; j < columnas; j++){
				
				sumatoria += numeros[i][j];
	
			}
		}
		
		cout << "La suma de todos los valores ingresados es: " << sumatoria << endl;
		
		if (numPrimo(sumatoria) == 1){
			
			cout << "\nEl numero [" << sumatoria << "] es un numero primo" << endl;
		} else {
			
			cout << "\nEl numero [" << sumatoria << "] no es un numero primo" << endl;
		}
		
		cout << "\nMatriz de " << filas << " filas y " << columnas << " columnas con los valores agregados\n " << endl;
		
		for (int i = 0; i < filas; i++){
			
			for (int j = 0; j < columnas; j++){
				
				cout << numeros[i][j] << " ";
	
			}
			
			cout << "\n";
		}
		
	} else {
		
		cout << "Opcion incorrecta" << endl;
	}
}

bool numPrimo(int a){
	
		bool primo = true;
	
	for (int i = 2; i < a; i ++){
		
		if (a % i == 0){
			
			primo = false;
			
		}
	}
	
	if (primo == true){
		
		return true;
		
	} else {
		
		return false;
		
	}
}


