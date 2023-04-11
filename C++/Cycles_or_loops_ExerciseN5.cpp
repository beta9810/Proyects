//Cycles or Loops - Exercise N°5: Escriba un programa que lea valores
//enteros hasta que se introduzca un valor en el rango [20-30] o se
//introduzca el valor 0. El programa debe entregar la suma de los valores
//mayores a 0 introducidos.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int number, addition = 0;
	
	do{
	cout<<"Please insert a Number: ";cin>>number;
	addition += number;
	}while(number<20 || number>30 && number !=0);
	
	cout<<"The answer of you number are: "<<addition<<endl;
	
	getch();
	return 0;
}
