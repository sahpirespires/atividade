#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string letra;
	
	cout << "Informe uma letra: ";
	cin >> letra;
	
	if ((letra == "a" or letra == "A") or (letra == "e" or letra == "E") or (letra == "i" or letra == "I") or (letra == "o" or letra == "O") or (letra == "u" or letra == "U")){
	
	
		cout << "� uma vogal";
	}else {
		cout << "� uma consoante";
	}
}
