#include <iostream>

using namespace std;

int main(){
	
	int l, c, j, i, soma, aux=0, maiorl, maiorc;
	cin>>l>>c;
	int M[100][100];

	for (i=0;i<l;i++){
		for (j=0;j<c;j++){
			cin>>M[i][j];
		}
	}
	
	for (i=0;i<l;i++){soma=0;
		for (j=0;j<c;j++){
			soma+=M[i][j];
			if (soma>aux){ 
				maiorl=soma;
				aux=soma;
			}
		}
	}
	
	aux=0;
	for (j=0;j<c;j++){soma=0;
		for (i=0;i<l;i++){
			soma+=M[i][j];
			if (soma>aux){ 
				maiorc=soma;
				aux=soma;
			}
		}
	}


	if (maiorl>maiorc) cout<<maiorl<<endl;
	else cout<<maiorc<<endl;
}
