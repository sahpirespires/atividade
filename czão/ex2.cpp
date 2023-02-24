#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N1,N2,result;
	
	cout<< "Informe um número: ";
	cin>> N1;
	
	cout<< "Informe outro número: ";
	cin>> N2;
	 
	 
	if (N1>N2){
		cout <<"O primeiro mencionado é o maoir";
	}
	
	if (N1<N2){
		cout <<"O segundo mencionado é o maoir";
	}
	
	if (N1==N2){
		cout <<"São iguais";
	}
}
