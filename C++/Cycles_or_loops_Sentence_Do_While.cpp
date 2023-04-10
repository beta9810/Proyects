//Cycles or Loops - Sentence Do while
/* The Sentence do while
do{
     Instrutions Set
}while (Expretion Logistic)
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i;
	
	i=10;
	do{
		cout<<i<<endl;
		i--;
	}while(i>=1);
/*	
	do{
		cout<<i<<endl;
		i++;//Aumenta el Iterador
		
	}while(i<=10);
*/	
	
	system("pause");
	return 0;
}
