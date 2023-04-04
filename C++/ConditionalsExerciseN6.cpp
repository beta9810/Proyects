//Conditionals Exercise N6:  Escriba un programa que lea de la entrada estándar un carácter
//e indique en la salida estándar si el carácter es una vocal minúscula, es una vocal mayúscula o no es una vocal.

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
