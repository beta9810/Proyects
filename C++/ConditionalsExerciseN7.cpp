//Conditionals Exercise N7: Escriba un programa que solicite una edad (un entero)
//e indique en la salida estándar si la edad introducida está en el rango [18-25].

#include <iostream>

using namespace std;

int main(){
	int old;
	
	cout<<"Please insert Old, whatever: ";cin>>old;
	
	if(old>=18 && old<=25){
		cout<<"Your Old is in the Range between 18 - 25";
	}else{
		cout<<"Your Old is out of Range between 18 - 25";
	}
	
	return 0;
}
