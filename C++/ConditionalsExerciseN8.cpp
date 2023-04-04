//Conditionals Exercise N8: Escribe un programa que lea de la entrada estándar tres números.
//Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.

#include <iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	
	cout<<"Please insert 4 numbers\n";
	cout<<"Insert the first number: ";cin>>n1;
	cout<<"Insert the second number: ";cin>>n2;
	cout<<"Insert the three number: ";cin>>n3;
	cout<<"Insert the Special Number: ";cin>>n4;
	
	if(n4 == n1){
		cout<<"Your Special number is the same that the First";
	}else if(n4 == n2){
		cout<<"Your Special number is the same that the Second";
	}else if(n4 == n3){
		cout<<"Your Special number is the same that the Three";
	}else{
		cout<<"Your Number ingress is diferent that the others";
	}
	
	
	return 0;
}
