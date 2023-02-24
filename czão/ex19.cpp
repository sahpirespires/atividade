#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		float l1, l2, l3;
		
		cout<<" Informe o primeiro ângulo do triângulo: ";
		cin>>l1;
		cout<<" Informe o segundo ângulo do triângulo: ";
		cin>>l2;
		cout<<" Informe o terceiro ângulo do triângulo: ";
		cin>>l3;
		
		if(l1 == 90 or l2 == 90 or l3 == 90){
			cout<< "O triângulo é retângulo";
		}else if(l1>90 or l2>90 or l3>90){
			cout<< "O triângulo é obtuso";
		}else if(l1<90 && l2<90 && l3<90){
			cout<< "O triângulo é agudo";
		}
		
}
