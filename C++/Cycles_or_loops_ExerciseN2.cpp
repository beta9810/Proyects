//Cycles or Loops - Exercise N�2: Realice un programa que lea de la entrada est�ndar
//n�meros hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida est�ndar el n�mero de valoresmayores que cero le�dos.

#include <iostream>

using namespace std;

int main(){
	int numbers, cont=0;
	
	do{
		cout<<"Digite un numero: "; 
		cin>>numbers;
		if(numbers>0){
			cont++; //aumentamos el conteo cada vez que encuentra un numero mayor a 0	
		}
	}while(number != 0);
	
	
	cout<<"\nEl total de numeros mayores que 0 es: "<<cont;
	
	return 0;
}
