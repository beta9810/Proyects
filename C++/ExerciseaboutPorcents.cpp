//Exercise about porcents: La calificación final de un estudiante es la
//media ponderada de tres notas: la nota de prácticas que cuenta un 30%
//del total, la nota teórica que cuenta un 60% y la nota de participación
//que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar
//las tres notas de un alumno y escriba en la salida estándar su nota final.

#include <iostream>

using namespace std;

int main(){
	float practing, theory, participation, porcent1, porcent2, porcent3, total = 0;
	
	cout<<"Please insert the Note for Practicing: ";cin>>practing;
	cout<<"Please insert the Note for Theory: ";cin>>theory;
	cout<<"Please insert the Note for Participation: ";cin>>participation;
	
	porcent1 = practing * 0.3;
	porcent2 = theory * 0.6;
	porcent3 = participation * 0.1;
	
	cout<<"The procent for your Practice is : "<<porcent1<<endl<<"For your Theory is: "<<theory<<endl<<"For your Participation is: "<<participation<<endl;
	
	total = porcent1 + porcent2 + porcent3;
	
	cout<<"Your Note Final is: "<<total;
	
	
	return 0;
}
