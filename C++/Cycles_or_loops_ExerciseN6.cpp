//Cycles or Loops - Exercise N°6: Escriba un programa que calcule x^y,
//donde tanto x como y son enteros positivos, sin utilizar la función pow.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,y,elevation=1;
	
	cout<<"Please insert the value for X: ";cin>>x;
	cout<<"Please insert the value for Y: ";cin>>y;
	
	for(int i=1; i<=y; i++){
		elevation *= x;
	}
	
	cout<<"The value of the Elevation is: "<<elevation;
	
	
	getch();
	return 0;
}
