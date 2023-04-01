/*
Exercise N°3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/

#include <iostream>

using namespace std;

int main (){
	int edad;
	float altura;
	char sexo [10];
	
	cout<<"Please insert your age:\n ";cin>>edad;
	cout<<"Please insert your high:\n ";cin>>altura;
	cout<<"Please insert your sex:\n ";cin>>sexo;
	
	cout<<"Your datas are: "<<"Age: "<<edad<<endl<<"High: "<<altura<<endl<<"Sex: "<<sexo;	
	return 0;
}
