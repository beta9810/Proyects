//Exercise for Roots, elevations and exponets N°2:Escriba un programa
//que calcule las soluciones de una ecuación de segundo grado de la forma
//ax^2 + bx + c = 0, teniendo en cuenta que: (-b+sqrt(pow(b,2)-4*a*c))/(2*a)
//y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b,c,answer=0, answers=0;
	
	cout<<"Please insert value for B: ";cin>>b;
	cout<<"Please insert value for A: ";cin>>a;
	cout<<"Please insert value for C: ";cin>>c;
	
	answer = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"The first answer is: "<<answer<<endl;
	
	answers = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"The Second answer is: "<<answers<<endl;
	
	return 0;
}
