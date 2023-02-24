#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		string senha, login;
		
		cout<<"Informe o seu login: ";
		cin>>login;
		
		cout<<"Informa sua senha: ";
		cin>>senha;
		
		if(login == senha ){
			cout<<"pode entrar";
		}else{
			cout<<"login e senha incorretos";
		}
}
		
