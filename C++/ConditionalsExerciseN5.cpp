//Conditionals Exercise N5: Escriba un programa que lea de la entrada est�ndar un car�cter e indique
//en la salida est�ndar si el car�cter es una vocal min�scula o no.

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
