#include <iostream>
using namespace std;

bool Eprimo(long);
int LeInteiro();

int main(){

	cout<<"Verificação de número primo"<<endl;
	int valor = LeInteiro();
	cout<< "Numero '" << valor << "'  " << (Eprimo(valor) ? "e" : "nao e") << "primo"; 

	return 0;
}

bool Eprimo(long numero){
	
	bool primo = true;
	
	for(div=2;div<=numero/2;div++){
		if (numero%div==0) {
			primo=false;
			break;
		}
	}
	return primo;
}

int LeInteiro(){
	int temp;
	cout<< "Digite um valor: "<<endl;
	cin>>temp;
	return temp;
}
