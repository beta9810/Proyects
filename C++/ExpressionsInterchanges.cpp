// Expressions interchange: Escriba un fragmento de
//programa que intercambie los valores de dos variables.

#include <iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"Please insert value for X: ";cin>>x;
	cout<<"Please insert value for Y: ";cin>>y;
	
	/*
	
	x=5
	y=10
	
	*/
	
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"The new Value of X is: "<<x<<endl;
	cout<<"The new Value of Y is: "<<y<<endl;
	
	return 0;
}
