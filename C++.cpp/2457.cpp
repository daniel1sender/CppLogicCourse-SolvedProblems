#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){

	string texto;
	float cout1=0, cout2=1, i;
	char letra;
	cin>>letra;
	cin.ignore();
	getline(cin,texto);
	
	for(i=0;i<texto.size();i++){
		if (texto[i]==' ') cout2++;} 

	for (i=0;i<texto.size();i++){
		if (texto[i]==letra){
			cout1++;
			for(;i<texto.size();i++){
				if (texto[i]==' ') break;
			}
		}
	}

cout<<fixed<<setprecision(1)<<((cout1/cout2)*100)<<endl;
}
