#include <iostream>
#include <string.h>
using namespace std;

int main(){

	string frase;
	int i;
	getline(cin,frase);
	for (i=0;i<frase.size();i+=2){
		if (frase[i]==' ')i+=1;		
		frase[i]=0;
	}
	for(i=0;i<frase.size();i++){
		if (frase[i]!=0) cout<<frase[i];
	}
cout<<endl;
}
