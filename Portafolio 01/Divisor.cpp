#include <iostream>
//divisores

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero, i, resto;
	cout << "En este programa mostramos todos los divisores de un numero" << endl;
	cout << "Por favor, ingresa un numero: ";
	cin >> numero;
	cout << "Los divisores de ese numero son: ";
		for (i=1; i<=numero ; i=i+1)
			{
			resto = numero%i;
			if (resto==0)
				{
				cout << i << " ";
				}
			}
	cout << endl;
	return 0;
}
