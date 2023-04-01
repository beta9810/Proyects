//Exercise N°2: Escribe un programa que lea de la entrada estándar el precio de un
//producto y muestre en la salida estándar el precio del producto al aplicarle el IVA.

#include <iostream>

using namespace std;

int main (){
	int result, price, convert;
	
	cout<<"I give you a T-shirt, What price do you want, please insert:\n";cin>>price;
	
	convert=price*0.19;
	result=convert+price;
	cout<<"This is your price complete: "<<result;	
	return 0;
}
