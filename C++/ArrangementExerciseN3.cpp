//Arrangement Exercise N° 3: Escribe un programa que lea de la entrada estándar un vector de números
//y muestre en la salida estándar los números del vector con sus índices asociados.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers[100],n;
	
	cout<<"Please insert a amout a numbers for you Array\n";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Insert a Nmber\n";cin>>numbers[i]; //Guardando los elementos del Vector
	}
	
	//Ahora vamos a ver los elementos con sus indices
	
	for(int i=0; i<n; i++){
		cout<<i<<"->"<<numbers[i]<<endl;
	}
	
	getch();
	return 0;
}
