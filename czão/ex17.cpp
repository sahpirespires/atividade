#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		int idade1, idade2;
		string nome1, nome2;
		
		cout<<"Informe seu nome: ";
		cin>>nome1;
		
		cout<<"Informe sua idade: ";
		cin>>idade1;
		
		cout<<"Informe seu nome: ";
		cin>>nome2;
		
		cout<<"Informe sua idade: ";
		cin>>idade2;
		
		if (idade1>idade2){
		cout <<"O primeiro mencionado é o maoir";
	}
	
	if (idade1<idade2){
		cout <<"O segundo mencionado é o maoir";
	}
	
	if (idade1==idade2){
		cout <<"São iguais";	
	}
}
	
