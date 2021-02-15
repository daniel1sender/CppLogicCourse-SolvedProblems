#include <iostream>
#include <string.h>

using namespace std;

int main(){

	int N, K=0, T, aux, i, j;
	string nome, menor, maior;

	while (cin>>N){
		aux=11;
		for(i=0;i<N;i++){
			cin>>nome>>T;
			if (T<aux){
				menor=nome;
				aux=T;
			}
			else {
				if (T==aux){
					for(j=0;j<20;j++){
						if (nome[j]>menor[j]){
							menor=nome;
							break;
						}
						if (nome[j]<menor[j]) break;
					}
				}
			}
		}
	K++;
	cout<<"Instancia "<<K<<endl;
	cout<<menor<<endl;
	cout<<endl;
	}
}
