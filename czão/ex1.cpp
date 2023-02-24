#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float hoje,nascimento,result;
	
	cout<< "Informe o ano atual: ";
	cin>> hoje;
	
	cout<< "Informe a data de nascimento: ";
	cin>> nascimento;
	
	result = (hoje-nascimento);
	
	if(result>=16){
		cout<< "Você já pode votar";
	}else   
	    cout << "Você não tem idade suficiente";
}

