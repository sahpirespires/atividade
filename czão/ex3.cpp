#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float p1,p2,result,presenca;
	
	cout << "Informe a porcentagem de presen�a de 0 a 100 ";
	cin >> presenca;
	
	if (presenca>25){
		cout << "Informe sua primeira nota: ";
		cin >> p1;
		
		cout << "Informe sua segunda nota: ";
		cin >> p2;
		
		result = (p1+p2) / 2;
		
		if (result >=6){
		cout << "Voc� passou com a nota: " << result << " parab�ns";
		}else {
		cout << " Reprovado";
		}
	}else {
		cout << " Reprovado";
	}
}
