#include <iostream>

using namespace std;
main(){
		setlocale(LC_ALL, "Portuguese");
		
		float l1, l2, l3;
		
		cout<<" Informe o primeiro �ngulo do tri�ngulo: ";
		cin>>l1;
		cout<<" Informe o segundo �ngulo do tri�ngulo: ";
		cin>>l2;
		cout<<" Informe o terceiro �ngulo do tri�ngulo: ";
		cin>>l3;
		
		if(l1 == 90 or l2 == 90 or l3 == 90){
			cout<< "O tri�ngulo � ret�ngulo";
		}else if(l1>90 or l2>90 or l3>90){
			cout<< "O tri�ngulo � obtuso";
		}else if(l1<90 && l2<90 && l3<90){
			cout<< "O tri�ngulo � agudo";
		}
		
}
