#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
 
 int random;
 int prueba;
 char numero = 'n';
 
 srand(time(0));
 random  = rand()% 10 + 1;
 
 cout  << "Elija un numero por favor"<< endl;
 cout << "Tu numero: ";
 cin >> prueba;
 
 if (random == prueba) {
     cout <<"Enhora buena, has ganado, ha que flipas     ";
     }else if (random > prueba ){
	 cout <<"JAJAJAJA HAS PERDIDO, El numero magico fue mayor que    "<< prueba << endl;
     }else if (prueba > 10){
     cout << "El numero no debe estar en el rango de 1 - 10 no puede ser este: "<< prueba << endl;
	 }else{
	cout << "Oooo parece que has perdido, el numero magico era menor que  "<< prueba << endl;
	 } 
	 
	cout << "Quieres saber el numero magico?  (s/n)"<<endl;
	cin >> numero;
	if (numero == 's'){
	cout << "El numero magico es:  "<< random <<endl;
	}else{
	cout << "Hey, pero puedes jugar cuantas veces quieras eh";
}
	 
	 

return 0;	
}
