#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		float salario, horas, result;
		
		cout<<"Informe seu salario: ";
		cin>>salario;
		
		cout<<"Informe as horas trabalhadas: ";
		cin>>horas;
		
		result = (salario+(horas*12));
		
		cout<<"O resultado �: " << result;
}
