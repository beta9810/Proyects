// Expressions

#include <iostream>

using namespace std;

int main (){
	float a,b,answer=0;
	
	cout<<"Please insert value of A: ";cin>>a;
	cout<<"Please insert value of B: ";cin>>b;
	
	
	answer = a/b +1;
	
	cout.precision(2);//This line is for round out all number a simply 2, dependint of the case
	cout<<"Your Answer is: "<<answer;
	
	
	return 0;
}
