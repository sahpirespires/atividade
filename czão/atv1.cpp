#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int combustivel, carro, bagageiro, portas, pessoas, valorCombustivel, valorTotal;
	
	cout<<"Qual é seu carro"<< endl;
	cout<<"1- para BMW"<< endl;
	cout<<"2- para AUDI"<< endl;
	cout<<"3- para FIAT"<< endl;
	cout<<"4- para FERRARI"<< endl;
	cout<<" R: ";
	cin>>carro;
	
	
	system("cls");
	
	cout<<"tem bagageiro"<< endl;
	cout<<"1-para sim"<< endl;
	cout<<"2-para não"<< endl;
	cout<<" R: ";
	cin>>bagageiro;
	
	
	system("cls");
	
	cout<<"tem  mais de quatro portas?"<< endl;
	cout<<"1-para sim"<< endl;
	cout<<"2-para não"<< endl;
	cout<<" R: ";
	cin>>portas;
	
	system("cls");
	
	cout<<"tem 2 pessoas a mais ?"<< endl;
	cout<<"1-para sim"<< endl;
	cout<<"2-para não"<< endl;
	cout<<" R: ";
	cin>>pessoas;
	
	system("cls");
	
	cout<<"Qual o combustivel ?"<< endl;
	cout<<"1-para gasolina"<< endl;
	cout<<"2-para alcool"<< endl;
	cout<<" R: ";
	cin>>combustivel;
	
	if(carro == 1 && combustivel == 1){
		valorCombustivel = 8.9;
	}else if(carro == 1 && combustivel == 2){
		valorCombustivel = 9.8;
	}else if(carro == 2 && combustivel == 1){
		valorCombustivel = 10.9;
	}else if(carro == 2 && combustivel == 2){
		valorCombustivel = 12.8;
	}else if(carro == 3 && combustivel == 1){
		valorCombustivel = 24.9;
	}else if(carro == 3 && combustivel == 2){
		valorCombustivel = 26.8;
	}else if(carro == 4 && combustivel == 1){
		valorCombustivel = 12.9;
	}else if(carro == 4 && combustivel == 2){
		valorCombustivel = 13.8;
	}
	
	valorTotal = valorCombustivel;
	
	if(bagageiro == 1 ){
		valorTotal = valorTotal-0.2;
	}
	
	if(portas == 1 ){
		valorTotal = valorTotal-0.5;
	}
	
	if(pessoas == 1 ){
		valorTotal = valorTotal-1.2;
	}
	
	cout<<"Seu valor era"<< valorCombustivel << "passou a ser"<< valorTotal;
	
	
	
		
		
	
	
	
	




	

	
}
