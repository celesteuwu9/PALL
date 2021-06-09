#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;


int main() {
	int resp; 
	printf ("\n Hey! ¿Que te parece un juego? o acaso ¿No confias en tu suerte? 6. Si      7. No");
	scanf ("%d" , &resp);
	
	while(resp == 7)
	{

	

		printf ("\n -----------BIENVENIDO AL JUEGO------------");
		
		printf ("\n Hey! ¿Que te parece un juego? o acaso ¿No confias en tu suerte? 6. Si   7. No");
	
		scanf ("%d" , &resp);
		
	}
		
	
	
	
	int movePlayer;
	cout <<" Maria Celeste Vanegas Cea Carnet: VC100520 \n";
	cout <<" Selecciona tu movimiento \n";
	cout <<"\n1. Tijeras \n2. Papel \n 3. Piedra \n 4. Lagarto \n 5. Spock\n";
	cin >> movePlayer;
	
	srand(time(0));
	string moveMachin;
	int numMove = rand()%5 +1;
	switch(numMove)
	{
		case 1: moveMachin= "Tijeras";
		break;
		case 2: moveMachin= "Papel";
		break;
		case 3: moveMachin= "Piedra";
		break; 
		case 4: moveMachin= "Lagarto";
		break;
		case 5: moveMachin= "Spock";
		break;
		
	}
	
	cout << "Nuestra maquina escogio:     \n"<<
	moveMachin << endl;
	if (movePlayer==numMove){
		cout <<"Has empatad, suerte para la proxima \n";
	}
	else if ((movePlayer==1)&&(numMove==3)){
	
		cout<<"Parece que tenemos un ganador! \n";
}
 else if ((movePlayer==1)&&(numMove==4)){

        cout<<"Parece que tenemos un ganador! \n";
}
else if ((movePlayer==2)&&(numMove==3)){

        cout<<"Parece que tenemos un ganador! \n";
}
else if ((movePlayer==2)&&(numMove==5)){

        cout<<"Parece que tenemos un ganador! \n";;
}
else if ((movePlayer==3)&&(numMove==4)){

        cout<<"Parece que tenemos un ganador! \n";
}
else if ((movePlayer==3)&&(numMove==1)){

        cout<<"Parece que tenemos un ganador! \n";
}
else if ((movePlayer==4)&&(numMove==5)){

       cout<<"Parece que tenemos un ganador! \n";
}
else if ((movePlayer==4)&&(numMove==2)){

        cout<<"Parece que tenemos un ganador! \n";
}
else if ((movePlayer==5)&&(numMove==1)){

        cout<<"Parece que tenemos un ganador! \n";
}
else if ((movePlayer==5)&&(numMove==3)){

    cout<<"Parece que tenemos un ganador! \n";
}
else 
{
    cout <<" Perdiste a casa platita \n" ;
}


printf ("\n Nos vemos en la siguiente partida");
		getch ();
  




	return 0;
}
