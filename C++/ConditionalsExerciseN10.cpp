//Conditionals Exercise N10: Mostrar los meses del año,
//pidiéndole al usuario un número entre (1-12),
//y mostrar el mes al que corresponde.

#include <iostream>

using namespace std;

int main(){
	int year;
	
	cout<<"Please insert a Number that concur with a Year: ";cin>>year;
	
	switch (year){
		case 1: cout<<"Your Number concur with a January"; break;
		case 2: cout<<"Your Number concur with a February"; break;
		case 3: cout<<"Your Number concur with a March"; break;
		case 4: cout<<"Your Number concur with a April"; break;
		case 5: cout<<"Your Number concur with a May"; break;
		case 6: cout<<"Your Number concur with a June"; break;
		case 7: cout<<"Your Number concur with a July"; break;
		case 8: cout<<"Your Number concur with a August"; break;
		case 9: cout<<"Your Number concur with a September"; break;
		case 10: cout<<"Your Number concur with a October"; break;
		case 11: cout<<"Your Number concur with a November"; break;
		case 12: cout<<"Your Number concur with a December"; break;
		
		default: cout<<"Your Number not concur"; break;
	}
	
	
	
	return 0;
}
