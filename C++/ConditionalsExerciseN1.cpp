//Exercise N°1 Conditionals: Escriba un programa que
//lea dos números y determine cuál de ellos es el mayor.

#include <iostream>

using namespace std;

int main(){
	int number1,number2;
	
	cout<<"Please insert 2 numbers"<<endl;
	cout<<"Please insert teh first: ";cin>>number1;
	cout<<"Please insert teh second: ";cin>>number2;
	
	if(number1>number2){
		cout<<"The first number ingress is higher that second "<<number1;
	}else if (number1 == number2){
	       cout<<"The boths numbers are the same "<<"The First Number: "<<number1<<endl<<"The Second Number is: "<<number2;		
	}else if(number2>number1){
		cout<<"The Second number is higher that the First "<<number2;
	}
	
	
	return 0;
}
