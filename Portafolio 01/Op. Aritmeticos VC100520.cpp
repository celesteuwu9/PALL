#include <iostream>
using namespace std;

int main (){

int x;
int y;

cout <<"Calculadora de operaciones aritmeticas, best magic   "<<endl;

cout<<"Ingresa el primer numero, por favor "<<endl;
cin >> x;

cout<<"Ingresa el segundo numero, por favor " <<endl;
cin >> y;

cout << "La suma de los numeros es " << x + y << endl;
cout << "La resta de los numeros es " << x - y << endl;
cout << "La multiplicacion de los numeros es " << x * y << endl;
cout << "La division de los numeros es " << x / y << endl;
cout << "El residuo de la division es " << x % y << endl;

++x;
++y;
cout <<"el incremento en uno es "<< "X:"<< x << " y:" << y << endl;

--x;
--y;
cout <<"el decremento en uno es "<< "X:"<< x << " y:" << y << endl;

return 0;
}
