//Conditionals Exercise N3: Realice un programa que lea un valor entero y determine si se trata de un número par o impar.

#include <iostream>

using namespace std;

int main(){
	int number;
	
	cout<<"Please insert a Number: ";cin>>number;
	
	if (number==0){
		cout<<"The Number is 0";
	}else if(number%2==0){
		cout<<"The Number is Pair";
	}else{
		cout<<"The Number is Odd";
	}
	
	return 0;
}
