#include <iostream>
using namespace std;

int main (){
	
	int x;
	int y;
	cout <<"Ingresa aqui un numero por favor  : ";
	cin >> x;
	cout <<"iIngresa aqui el otro numero por favor : ";
	cin >> y;
	cout <<"Suma :   ";
	
	x +=y;
	cout << x <<endl;
	
	cout <<"Resta: ";
	x -=y;
	cout << x <<endl;
	
	cout <<"Multiplicacion: ";
	x *=y;
	cout << x <<endl;
	
	cout <<"Division: ";
	x /=y;
	cout << x <<endl;
	
	cout <<"Residuo: ";
	x %=y;
	cout << x <<endl;
	
	return 0;
}
