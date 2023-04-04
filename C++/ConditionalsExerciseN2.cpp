//Conditionals Exercise N2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor.

#include <iostream>

using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"Please insert a Three Numbers\n";
	cout<<"Give me the First Number: ";cin>>n1;
	cout<<"Give me the Second Number: ";cin>>n2;
	cout<<"Give me the Three Number: ";cin>>n3;
	
	if(n1>n2 and n1>n3){
		cout<<"The First number ingress is bigger that others";
	}else if(n2>n1 and n2>n3){
		cout<<"The Second number ingress is bigger that others";
	}else if(n3>n1 and n3>n2){
		cout<<"The Three number is bigger that others";
	}
	
	return 0;
}
