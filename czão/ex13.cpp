#include <iostream>

using namespace std;	

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area;
	const float pi = 3.14;
	
	cout << "informe o valor do raio: ";
	cin >> raio;
	
	area = ( pi*(raio*raio));
	
	cout << "o resultado da area �: " << area;
}
