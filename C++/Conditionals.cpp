//Conditionals

/* La sentencia if

if(conditional){
    Instrution 1;
}
 else{
    Instrution 2;
}

*/

#include <iostream>

using namespace std;

int main(){
	int number, data = 5;
	
	cout<<"Please insert a number: ";cin>>number;
	
	if(number == data){
    cout<<"The number is 5";
}
 else{
    cout<<"The number is diferent to 5";
}

	return 0;
}
