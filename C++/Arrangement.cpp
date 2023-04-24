//Arrangement Exercise N° 1:Escribe un programa que defina un 
//vector de números y calcule la suma de sus elementos.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers[5]={1,2,3,4,5};
	int suma=0;
	
	for(int i=0; i<5; i++){
		suma = suma + numbers[i];
	}
	
	cout<<"Your sume is: "<<suma;
	
	getch();
	return 0;
}
