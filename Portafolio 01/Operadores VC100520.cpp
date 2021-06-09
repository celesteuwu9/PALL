#include <iostream>

using namespace std;

int main(){
	
	int C = 18, P = 23;
	bool boo1 = true, boo2 = false;
	
	if (C <  P) { cout << "C <  P \n";}
	if (C <= P) { cout << "C <= P \n";}
	if (C != P) { cout << "C != P \n";}
	if (C == P) { cout << "C == P \n";}
	if (C >= P) { cout << "C => P \n";}
	if (C > P)  { cout << "C > P  \n";}
	
	if (boo1 && boo2 ) {cout << "boo1 AND boo2 \n";}
	if (!(boo1 && boo2)) {cout << "NOT (boo1 AND boo2) \n";}
	if (boo1 || boo2) {cout << "boo1 or boo2 \n";}
	
	

return 0;	
}
