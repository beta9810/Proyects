//Cycles or Loops - Exercise N�1: Realice un programa que solicite de la entrada est�ndar
//un entero del 1 al 10 y muestre en la salida est�ndar su tabla de multiplicar.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int number;
	
	do{
	cout<<"Please insert a Number: ";cin>>number;
    }while(number<=1 || number>=10);
    
    for(int i=1; i<=20; i++){
    	cout<<number<<" * "<<i<<" = "<<number*i<<endl;
	}
	
	getch();
	return 0;
}
