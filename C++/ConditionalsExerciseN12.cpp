//Conditionals Exercise N12: Hacer un menú que considere las siguientes opciones:
//Caso 1: Cubo de un numero
//Caso 2: Numero par o impar
//Case 3: salir.

#include <iostream>
#include <math.h>

using namespace std;


int main(){
	int option, number, result = 0;
	
	cout<<"\tWelcome of you Calculador\n";
	cout<<"1. Find a Cube of Number\n";
	cout<<"2. Numbers Pair and Odd\n";
	cout<<"3. Out\n";
	cout<<"Please insert a Option: ";cin>>option;
	
	switch(option){
		case 1: 
		cout<<"Please insert a Number: ";cin>>number;
		
		result = number * number * number;
		
		cout<<"This is your result: "<<result;
	break;
	
	case 2:	
	cout<<"Please insert a Number: ";cin>>number;
	
	if (number==0){
		cout<<"The Number is 0";
	}else if(number%2==0){
		cout<<"The Number is Pair";
	}else{
		cout<<"The Number is Odd";
	}
	break;
	
	case 3: break;
	
	default: 
	cout<<"Your Option isn't valide'";	
	
}
	return 0;
}
