#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int year; 
	cout << "Por favor introduzca un anio:  ";
	cin >> year;
	
	if (year % 4 == 0){
		if (year % 100 == 0){
			if (year % 400 == 0)
			cout << year << " Es anio bisiesto siii." << endl;
			else
			cout << year << "   No es anio bisisesto buuuu." << endl;
			
		}else{ 
		cout << year << "  Anio bisiesto wow " << endl;
		}
	}else{ 
	cout << year << " No es anio bisiesto :c  " << endl;
	
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
