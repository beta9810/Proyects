//Conditionals Exercise N11: Hacer un programa que simule un
//cajero automático con un saldo inicial de 1000 Dólares.

#include <iostream>

using namespace std;

int main(){
	int residue_init = 1000, opc;
	float extra, residue=0, retire;
	
	cout<<"\tWelcome a your ATM\n";
	cout<<"1. Ingress a Money\n";
	cout<<"2. Retire a Money\n";
	cout<<"3. Out\n";
	cout<<"Options: ";cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Please insert the amount that you want ingress: ";cin>>extra;
			residue = residue_init + extra;
			cout<<"Money in your Account is :"<<residue; break;
		case 2:
			cout<<"Pleas insert the amount that you want retire: ";cin>>retire;
			
			if(retire>residue_init){
				cout<<"You don't have this amount";
			}else{
				residue = residue_init - retire;
				cout<<"Your residue is now: "<<residue;
			}
			
		break;
		
		case 3: break;
	}
	
	return 0;
}
