//Conditionals Exercise N6:  Escriba un programa que lea de la entrada est�ndar un car�cter
//e indique en la salida est�ndar si el car�cter es una vocal min�scula, es una vocal may�scula o no es una vocal.

#include <iostream>

using namespace std;

int main(){
	char letter;
	
	cout<<"Please insert a Letter Vocal: ";cin>>letter;
	
	switch(letter){
		case 'a':
			case 'e':
				case 'i':
					case 'o':
						case 'u':
							cout<<"This is a Vocal Minuscule";
							break;
		case 'A':
			case 'E':
				case 'I':
					case 'O':
						case 'U':
							cout<<"This is a Capital Letter Vocal";
							break;			
		default: cout<<"This is a character special or number one";
		break;
	}
	
	return 0;
}
