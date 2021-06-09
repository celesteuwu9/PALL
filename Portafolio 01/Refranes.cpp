#include <iostream>
using namespace std;
int main(){
	int num;
	
	cout << "Ingresa un numero entre 1 y 3:  ";
	cin >> num;
	
	switch(num) {
		case 1:
			cout << " Al perro mas flaco se le pegan las pulgas. \n";
			break;
		case 2:
				cout << "Al caballo regalado no se le busca lado \n";
				break;
		case 3: 
				cout << "Camaron que se duerme se lo lleva la corriente \n";
				break;
				default: 
				cout << " Debes ingresar uno de los siguientes numeros 1, 2 o 3. \n";
				 
	}
	
	return 0;
	
}
