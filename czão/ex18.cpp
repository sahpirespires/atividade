#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		float lado1, lado2, lado3;
		
		cout<<" Informe o primeiro lado do triângulo: ";
		cin>>lado1;
		cout<<" Informe o segundo lado do triângulo: ";
		cin>>lado2;
		cout<<" Informe o terceiro lado do triângulo: ";
		cin>>lado3;
		
		if(lado1 == lado2 && lado2 == lado3) {
			cout << "O triângulo é equilátero."<< endl;
		}else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
			cout << "O triângulo é isósceles." << endl;
		}else {
			cout << "O triângulo é escaleno." << endl;
		}
		
}
	
