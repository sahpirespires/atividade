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
		cout<< "Voc� j� pode votar";
	}else   
	    cout << "Voc� n�o tem idade suficiente";
}

