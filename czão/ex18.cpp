#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		float lado1, lado2, lado3;
		
		cout<<" Informe o primeiro lado do tri�ngulo: ";
		cin>>lado1;
		cout<<" Informe o segundo lado do tri�ngulo: ";
		cin>>lado2;
		cout<<" Informe o terceiro lado do tri�ngulo: ";
		cin>>lado3;
		
		if(lado1 == lado2 && lado2 == lado3) {
			cout << "O tri�ngulo � equil�tero."<< endl;
		}else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
			cout << "O tri�ngulo � is�sceles." << endl;
		}else {
			cout << "O tri�ngulo � escaleno." << endl;
		}
		
}
	
