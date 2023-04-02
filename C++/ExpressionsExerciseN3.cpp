//Expressions Exercise N°2 : Ejercicio 4: Escribe la siguiente expresión como 
//expresión en C++: a + (b/(c-d))

#include <iostream>

using namespace std;

int main(){
	float a,b,c,d, answer=0;
	
	cout<<"Please insert value for A: ";cin>>a;	
	cout<<"Please insert value for B: ";cin>>b;	
	cout<<"Please insert value for C: ";cin>>c;	
	cout<<"Please insert value for D: ";cin>>d;	
	
	answer= a+(b/(c-d));
	
	cout.precision(2);
	cout<<"Your answer is: "<<answer;
	
	return 0;
}
