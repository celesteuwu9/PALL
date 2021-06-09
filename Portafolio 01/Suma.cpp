#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n, sum = 0;
	while (n >=0){
		cout << "Ingrese un numero a sumar (-1 para ver resultado): ";
		cin >> n;
		sum += n;
		
	}
	
	cout << "Suma = " << sum;
	
	return 0;
}
