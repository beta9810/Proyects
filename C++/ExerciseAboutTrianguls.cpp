//Exercise about trianguls and suma of catets: Escriba un programa que
//lea de la entrada estándar los dos catetos de un triángulo rectángulo
//y escriba en la salida estándar su hipotenusa.

#include <iostream>

using namespace std;

int main(){
	int cat1,cat2,hipot = 0;
	
	cout<<"Please insert the First Cateto: ";cin>>cat1;
	cout<<"Pelase insert the second Cateto; ";cin>>cat2;
	
	hipot = cat1+cat2;
	
	cout<<"Teh answer to Hipotenus is: "<<hipot;
	
	
	return 0;
}
