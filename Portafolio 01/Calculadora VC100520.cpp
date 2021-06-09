
#include <iostream>

using namespace std;
int main(){

int x;
int y;

cout << " *** Calculemos operaciones aritmeticas de dos numeros siiii*** \n";

cout << "inserta aqui un numero po: ";
cin >> x;

cout << "inserta aqui el otro numero po:";
cin >> y;

cout << "Resultado de la Suma: "  << x + y << endl;            
cout << "Resultado de la Resta: " << x - y << endl;                   
cout << "Resultado de la Multiplicacion: " << x * y << endl;    											  
cout <<"Resultado de la Division:" << x / y << endl;               
cout << "Este es el incremento de division: " << x % y << endl; 
++x;
++y;
cout << "Este es el incremento en uno:" << "x:" << x << "   y: " << y << endl;

--x;
--y;
cout << "Y por ultimo el Decremento en uno: "<< "X: " << x << "  y: " << y << endl;

return 0;

}
