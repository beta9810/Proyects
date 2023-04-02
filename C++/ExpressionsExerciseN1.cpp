//Expressions Exercise N°1 : Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)

#include <iostream>

using namespace std;

int main(){
	float a,b,c,d,answer=0;
	
	cout<<"Please insert the value for A: ";cin>>a;
	cout<<"please insert the value for B: ";cin>>b;
	cout<<"please insert the value for C: ";cin>>c;
	cout<<"please insert the value for D: ";cin>>d;
	
	answer = (a + b)/(c+d);
	
	cout<<"Your answer is: "<<answer;
	
	return 0;
}
