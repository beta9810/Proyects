//Expressions Exercise N°2 : Ejercicio 3: Escribe la siguiente expresión como 
//expresión en C++: (a+(b/c))/(d+(e/f))


#include <iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, answer=0;
	
	cout<<"Please insert value for A: ";cin>>a;
	cout<<"Please insert value for B: ";cin>>b;
	cout<<"Please insert value for C: ";cin>>c;
	cout<<"Please insert value for D: ";cin>>d;
	cout<<"Please insert value for E: ";cin>>e;
	cout<<"Please insert value for F: ";cin>>f;
	
	answer = (a+(b/c))/(d+(e/f));
	
	cout<<"Your answer is: "<<answer;
	
	return 0;
}
