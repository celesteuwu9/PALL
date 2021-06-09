#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i = 1, n, factorial = 1;
	cout << "Digite el factorial  [ n! ]:   ";
	cin >>n;
	while (i <= n){
		factorial *= i;
		i++;
		
	}
	
	cout << endl <<n<<" ! = "<<factorial<< endl;
	
	
	
	return 0;
}
