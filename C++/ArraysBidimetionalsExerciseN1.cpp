//Arrays Bidimetionals Exercise N° 1: Hacer un programa para rellenar una matriz pidiendo
//al usuario el número de filas y columnas, Posteriormente mostrar la matriz en pantalla.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers[100][100], row,colum;
	
	cout<<"Please insert a number of Rows";cin>>row;
	cout<<"Please insert a number of Columns";cin>>colum;
	
	
	//Save elements in the Array
	for(int i=0;i<row;i++){
		for(int j=0;j<colum;j++){
			cout<<"Please insert a number ["<<i<<"]["<<j<<"]";//[0][1]
			cin>>numbers[i][j];
		}
	}
	
	//Show array
	
	for(int i=0;i<row;i++){
		for(int j=0;j<colum;j++){
			cout<<numbers[i][j];
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}
