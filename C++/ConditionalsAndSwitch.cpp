//Conditionals and Switch

/*

switch (expretion){
    case literal 1:
    conjunto de instrucciones1;
    break;
    
      case literal 2:
      conjunto de instrucciones2;
      break;
      
        case literaln;
        conjunto de instruccionesn;
        break;
        
          default:
            conjunto de instrucciones por defecto;
            break;
}

*/

#include <iostream>

using namespace std;

int main(){
	int number;
	
	cout<<"Please insert a number: ";cin>>number;
	
	switch (number){
		case 1: cout<<"The number is 1"; break;
		case 2: cout<<"The number is 2"; break;
		case 3: cout<<"The number is 3"; break;
		case 4: cout<<"The number is 4"; break;
		case 5: cout<<"The number is 5"; break;
		default: cout<<"The number there isn�t in a range of 1-5"; break;
	}
	
	return 0;
}


