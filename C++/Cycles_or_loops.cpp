//Cycles or loops

/*
The sentence while:

    while (expression logic){
	      instrutions
	}

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i;		
/*	
	i=1;
	while(i<=10){
		cout<<i<<endl;
		i++;
	}
*/
    i=10;
	while(i>=1){
		cout<<i<<endl;
		i--;
	}
	
	getch(); //Propia de la nueva librería #include <conio.h>
	
	return 0;
}
