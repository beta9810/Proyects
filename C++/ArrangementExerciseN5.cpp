//Arrangement Exercise N° 5: Desarrolle un programa que lea de la entrada
//estándar un vector de enteros y determine el mayor elemento del vector.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers [10],n, mayor=0;
	
	cout<<"Please insert amount of numbers for this Array"; cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<i+1<<". Insert a number: ";//Digite un número:
		cin>>numbers[i];
		
		if(numbers[i] > mayor){
			mayor = numbers[i];
		}
	} 
	
	cout<<"\nThe number up of vector is: "<<mayor<<endl;
	
	
	getch();
	return 0;
}

