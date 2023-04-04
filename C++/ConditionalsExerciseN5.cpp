//Conditionals Exercise N5: Escriba un programa que lea de la entrada estándar un carácter e indique
//en la salida estándar si el carácter es una vocal minúscula o no.

#include <iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Please insert a Vocal: ";cin>>letra;
	
	switch (letra){
	
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout<<"This is a Letter Minuscule";
		break;
	default: cout<<"This is a Capital Letter";
	break;
	
	}	
	
	
	
	return 0;
}
