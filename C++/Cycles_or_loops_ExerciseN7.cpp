//Cycles or Loops - Exercise N°7: Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n, suma=0;
	
	cout<<"Please insert a Number of elements";
	cin>>n;
	
	for (int i=1; i<=n; i++){
		suma = suma + i;
	}
	
	cout<<"Your sume is: "<<suma<<endl;
	
	getch();
	return 0;
}
