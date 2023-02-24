#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		float N1,N2, N3, result;
	
	cout<< "Informe um número: ";
	cin>> N1;
	
	cout<< "Informe outro número: ";
	cin>> N2;
	
	cout<< " Informe outro número: ";
	cin>> N3;
	 
	 
	if (N1>N2 && N1>N3){
		cout<< "O número "<< N1 << " é o maior";
	}else if(N2>N1 && N2>N3){
		cout<< "O número "<< N2 << "é o maior";
	}else if(N3>N1 && N3>N2){
		cout<< "O número "<< N3 << "é o maior";
	}
}
	
		
