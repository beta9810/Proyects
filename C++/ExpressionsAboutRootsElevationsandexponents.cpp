//Expressions about Roots, elevations an exponents: Realice un programa que calcule
//el valor que toma la siguiente función para unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1) 

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float x,y,answer = 0;
	
	cout<<"Please insert Value for X: ";cin>>x;
	cout<<"Please insert Value for Y: ";cin>>y;
	
	answer = (sqrt(x))/ (pow(y,2)-1);
	
	cout<<"The answer is: "<<answer;
		
	return 0;
}
