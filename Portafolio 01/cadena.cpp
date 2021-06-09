#include <iostream>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	char frase  [40];
	int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;
	 cout << "Digite una frase:  ";
	 cin.getline(frase,40, '\n');
	 
	 
	 for(int i=0; i<40; i++){
	 	switch(frase[i]){
	 		case 'a' : vocal_a++;
	 		break;
	 		case 'e' : vocal_e++;
	 		break;
	 		case 'i' : vocal_i++;
	 		break;
	 		case 'o' : vocal_o++;
	 		break;
	 		case 'u' : vocal_u++;
	 		break;
		 }
	 }
	 
	 cout << "Vocal a: " <<vocal_a<<"\n  Es un digito"<<endl;
	 cout << "Vocal e: " <<vocal_e<<"\n  Es un digito"<<endl;
	 cout << "Vocal e: " <<vocal_i<<"\n  Es un digito"<<endl;
	 cout << "Vocal e: " <<vocal_o<<"\n  Es un digito"<<endl;
	 cout << "Vocal e: " <<vocal_u<<"\n  Es un digito"<<endl;
	return 0;
}
