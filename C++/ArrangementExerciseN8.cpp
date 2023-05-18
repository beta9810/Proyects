//Arrangement Exercise N° 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers1[]={1, 2, 1, 2, 1};
	int numbers[5];
	
	//Coping the elements of numbers1 to numbers * 2
	
	for(int i=0;i<5;i++){
		numbers[i]=numbers1[i]*2;
	}
	
	//Show the new Vector
	
	for(int i=0;i<5;i++){
		cout<<numbers[i]<<endl;
	}
	
	getch();
	return 0;
}
