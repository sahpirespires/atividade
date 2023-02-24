#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		float ano, resultado;
		
		cout<< "Informe o ano de nascimento: ";
		cin>> ano;
		
		const int hoje = 2023;
		
		resultado = (hoje - ano);
		cout<< "Sua idade é "<<resultado;
		
}
		
		
