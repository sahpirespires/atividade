#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		float N1,N2, N3, result;
	
	cout<< "Informe um n�mero: ";
	cin>> N1;
	
	cout<< "Informe outro n�mero: ";
	cin>> N2;
	
	cout<< " Informe outro n�mero: ";
	cin>> N3;
	 
	 
	if (N1>N2 && N1>N3){
		cout<< "O n�mero "<< N1 << " � o maior";
	}else if(N2>N1 && N2>N3){
		cout<< "O n�mero "<< N2 << "� o maior";
	}else if(N3>N1 && N3>N2){
		cout<< "O n�mero "<< N3 << "� o maior";
	}
}
	
		
