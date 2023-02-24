#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, i = 1;
	cout << " digite um numero inteiro: ";
	cin >> num;
	cout << "numeros impares menores ou iguais a " << num << ":";
	do {
		if (i % 2 != 0) {
			cout << i << " ";
		}
		i++;
	}while (i <= num);
}
