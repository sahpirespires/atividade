#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N1,N2,result;
	
	cout<< "Informe um n�mero: ";
	cin>> N1;
	
	cout<< "Informe outro n�mero: ";
	cin>> N2;
	 
	 
	if (N1>N2){
		cout <<"O primeiro mencionado � o maoir";
	}
	
	if (N1<N2){
		cout <<"O segundo mencionado � o maoir";
	}
	
	if (N1==N2){
		cout <<"S�o iguais";
	}
}
