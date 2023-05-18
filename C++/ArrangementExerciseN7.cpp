//Arrangement Exercise N° 7: Realiza un programa que defina dos vectores de caracteres y después
//almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos
//del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	char letter1[]={'a', 'b', 'c', 'd', 'e'};
	char letter2[]={'f', 'g', 'h', 'i', 'j'};
	char letters[10];
	
	//Coping the elements of letter1 to letters
	
	for(int i=0;i<5;i++){
		letters[i]=letter1[i];
	}
	
	//Coping the elements of letter2 to letters
	 
	for(int i=0;i<5;i++){
		letters[i]=letter2[i-5];
	}
	
	//Show the new Vector
	
	for(int i=0;i<10;i++){
		cout<<letters[i]<<endl;
	}
	
	getch();
	return 0;
}
