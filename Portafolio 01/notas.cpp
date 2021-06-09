#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	




	
	double nota; 
	cout << "Ingresa la nota que obtuviste en el examen: ";
	
	cin >> nota;
	string resultado;
	
	resultado = (nota >= 6) ? "Aprobado" : "Reprobado";
	cout << "Usted" << resultado << " el examen. " << endl;
	
	resultado = (nota == 0) ? "no tiene nota en " : ((nota >= 6) ?  "Aprobado" :  "Reprobado");
	cout << "Usted " << resultado << " el examen " << endl;
	
	
	
	

	
	
	
	return 0;
}
