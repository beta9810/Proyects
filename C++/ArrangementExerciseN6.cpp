//Arrangement Exercise N° 6:Escribe un programa que defina un vector de números y calcule si
//existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers [10],n,suma,same=0;
	
	cout<<"Please insert amount of numbers for this Array\n"; cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Insert a number: "; cin>>numbers[i];
		suma=suma+numbers[i];
	}
	
	if(suma == n){
			cout<<"The addition is the same";
		}else{
			cout<<"The addition isn't the same";
		}
	
	getch();
	return 0;
}
