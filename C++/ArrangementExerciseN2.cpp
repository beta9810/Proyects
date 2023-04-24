//Arrangement Exercise N° 2: Escribe un programa que defina un vector de números y calcule la multiplicación
//acumulada de sus elementos.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers[8]={1,2,3,2,1,2,3,5};
	int suma=1;
	
	for(int i=0; i<8; i++){
		suma = suma * numbers[i];
	}
	
	cout<<"Your multiplication is: "<<suma<<endl;
	
	getch();
	return 0;
}
