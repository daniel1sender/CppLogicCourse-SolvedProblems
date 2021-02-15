#include <iostream>
using namespace std;

int LeInteiro(){
	
	int temp;
	cout<<"Digite um inteiro: ";
	cin>>temp;
	
	return temp;
}



int main(){

	int valor;
	valor=LeInteiro();
	cout<<"Valor lido: "<<valor;

	return 0;
