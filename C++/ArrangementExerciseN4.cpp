//Arrangement Exercise N� 4: Escribe un programa que defina un vector de n�meros y muestre en la salida
//est�ndar el vector en orden inverso�del �ltimo al primer elemento.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers[50],n;
	
	cout<<"Please insert a amout a numbers for you Array\n";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Insert a Nmber\n";cin>>numbers[i]; //Guardando los elementos del Vector
	}
	
	//Ahora vamos a ver los elementos con sus indices
	
	for(int i=n; i>0; i--){
		cout<<i<<"->"<<numbers[i]<<endl;
	}
	
	getch();
	return 0;
}
