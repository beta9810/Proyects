//Cycles or Loops - Exercise N�3:Realice un programa que calcule
//y muestre en la salida est�ndar la suma de los cuadrados de los 10
//primeros enteros mayores que cero.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int suma = 0, cuadrado;
	
	for(int i=1; i<=10; i++){
		cuadrado = i * i;
		suma = suma + cuadrado;
	}
	
	cout<<"The answer of addition is: "<<suma<<endl;
	
	
	getch();
	return 0;
}

