#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		float numero;
		
		cout<< "Informe um n�mero: ";
		cin>> numero;
		
		if(numero>0){
			cout<< "O n�mero � positivo: ";
		}else if(numero == 0){
			cout<< " O n�mero � zero ";
		}else if (numero<0){
			cout<< "O n�mero � negativo ";
		}
		


}
	
