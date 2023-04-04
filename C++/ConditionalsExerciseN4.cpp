//Conditionals Exercise N4: Comprobar si un número digitado por el usuario es positivo o negativo.

#include <iostream>

using namespace std;

int main(){
	int number;
	
	cout<<"Please insert a Number: ";cin>>number;
	
	if(number>0){
		cout<<"The Number is Possitive";
	}else if(number<0){
		cout<<"The Number is Negative";
	}else{
		cout<<"The Number is 0";
	}
	
	
	return 0;
}
