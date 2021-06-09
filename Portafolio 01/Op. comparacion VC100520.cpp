#include <iostream>
using namespace std;

int main(){
	

	int x;
	int y;
	cout << "Ingresa aqui un numero por favor : ";
	cin >> x;
	cout << "Ingresa aqui otro numero por favor : ";
	cin >> y;
	
	bool var1 = true;
	bool var2 = false;
	 
	
	 
	cout << "valor de false : "<< var2 << endl;
	cout << "valor de true : " << var1 << endl;
	
	cout <<"es menor, el primer numero? " << (x < y ) << endl;
	cout <<"es nayor, el primer numero? " << (x > y ) << endl;
	cout <<"Es acaso el primer numero es menor o igual que el segundo numero? "<< (x <=y ) << endl;
	cout <<"Es acaso el primer numero es mayor o igual que el segundo numero? "<< (x >=y ) << endl;
	cout <<"Es acaso el primer numero es diferente que el segundo numero "<< (x !=  y ) << endl;
	cout <<" Si son los dos numeros son iguales "<< (x ==  y ) << endl;
	

return 0;
	
}
