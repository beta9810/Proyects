//Arrays Bidimetionals Exercise N° 3:Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers[50][50], rows, columns, numbers1[50][50];
	
	cout<<"Please insert a number to Rows: ";cin>>rows;
	cout<<"Please insert a number to Columns: ";cin>>columns;
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"Please insert a number ["<<i<<"]["<<j<<"]";cin>>numbers[i][j];
		}
	}
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			numbers1[i][j]=numbers[i][j];
				cout<<numbers1[i][j];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
