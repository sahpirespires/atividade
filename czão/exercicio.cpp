#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float p1,p2,result;
	
	cout<<"Informe a primeira nota: ";
	cin>> p1;
	
	cout<< "Informe a Segunda nota: ";
	cin>> p2;
	
	result = (p1+p2) / 2;
	
	if (result>=7){
		cout<< "Voc� passou com a nota " << result << " parab�ns";
	}else{
		cout << "N�o foi dessa vez ";
	}
}
