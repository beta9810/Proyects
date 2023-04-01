//Exercise N°1:  Escribe un programa que lea de la entrada estándar dos números
//y muestre en la salida estándar su suma, resta, multiplicación y división.

#include <iostream>

using namespace std;

int main(){
	int n1,n2,suma=0,resta=0,multi=0,div=0;
	
	cout<<"Please insert 2 numbers\n";
	cout<<"Please insert the number 1\n";cin>>n1;
	cout<<"Please insert the number 2\n";cin>>n2;
	
	suma=n1+n2;
	resta=n1-n2;
	multi=n1*n2;
	div=n1/n2;
	
	cout<<"Your results are:\n"<<"Suma: "<<suma<<endl<<"Resta: "<<resta<<endl<<"Multiplicacion: "<<multi<<endl<<"Division: "<<div;
	
	
	return 0;
}
